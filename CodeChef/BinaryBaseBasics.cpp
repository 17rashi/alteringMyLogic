#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,count=0;
	    cin>>n>>k;
	    string S;
	    cin>>S;
	    int first=0,last=n-1;
	    while(first<=last){
         //  cout<<S[first]<<" "<<S[last]<<endl;
	        if(S[first]==S[last]){
	            first++;
	            last--;
	        }
	        else{
	           count++;
	           first++;
	           last--;
	        }
         //   cout<<count<<endl;
	    }
	    if(count<=k){
            if(n%2==1){
               cout<<"YES"<<endl;
            }
            else if(k-count%2==0)
            {
               cout<<"YES"<<endl;
            }
            else{
               cout<<"NO"<<endl;
            }
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
