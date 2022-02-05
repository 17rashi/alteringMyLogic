//https://leetcode.com/problems/richest-customer-wealth/

#include<bits/stdc++.h>
using namespace std;
int main(){
   int m,n,a;
   cin>>m>>n;
   vector<vector<int>> accounts;
   for(int i=0; i<m; i++){ 
    vector<int> temp;
    for(int j=0; j<n; j++){   
      cin>>a;
      temp.push_back(a); 
    }
    accounts.push_back(temp);
    temp.clear();
 }
   int sum=0,max_sum=0;
   for(int i=0;i<accounts.size();i++){
      for(int j=0;j<accounts[i].size();j++){
            sum+=accounts[i][j];
            // cout<<accounts[i][j]<<" ";
         }
         max_sum=max(max_sum,sum);
         sum=0;
   }
   cout<<endl<<max_sum<<endl;
  return 0;
}