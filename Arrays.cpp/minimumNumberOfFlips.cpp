// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string S)
{
   int count_right=0,count_wrong=0;
   for(int i=0;i<S.length();i++){
      if(i%2==0){
         if(S[i]=='0'){
            count_right++;
         }
         else{
            count_wrong++;
         }
      }
      else{
         if(S[i]=='1'){
            count_right++;
         }
         else{
            count_wrong++;
         }
      }
   }
   return min(count_wrong,count_right);
}
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}