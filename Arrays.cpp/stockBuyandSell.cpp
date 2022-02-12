//stock buy and sell problem
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

#include<bits/stdc++.h>
using namespace std;
int stockBuyandSell(vector<int> nums){
   int profit=0;
   for(int i=1;i<nums.size();i++){
      if(nums[i]>nums[i-1]){
         profit+=(nums[i]-nums[i-1]);
      }
   }
   return profit;
}
int main(){
   int n;
   cin>>n;
   vector<int> nums;
   for(int i=0;i<n;i++){
      int a;
      cin>>a;
      nums.push_back(a);
   }
   cout<<stockBuyandSell(nums)<<endl;
  return 0;
}