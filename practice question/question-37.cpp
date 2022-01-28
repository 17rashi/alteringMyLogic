#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int element=1;
        int N;
        int count=0;
        cin >> N;
        int A[N];
        for(int i=0; i<N; i++){
            cin >> A[i];
            count++;
        }

        //cout << count << endl;
        for(int j=0; j<=N/2; j++){
            if(A[j]==element and A[j]==A[(N-1)-j] and A[j] <=7){
                //cout << "matched " << A[j] << endl;
                element++;
            }
            else if(A[j]==A[j-1] and A[j]==A[(N-1)-j] and A[j] <=7){
                //cout << A[j] << "  same element\n";
            }
            else{
                element=0;
                break;
            }
        }

        if((element-1)==7){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;}