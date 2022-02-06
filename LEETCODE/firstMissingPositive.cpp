#include<bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(),ans.end());
        int res=1;
        for(int i=1;i<ans.size();i++){
          if(ans[i]!=ans[res-1]){
             ans[res]=ans[i];
             res++;
          }
        }
        int count=1;
        for(int i=0;i<ans.size();i++){
            if(count==ans[i]){
                count++;
            }
            else{
                break;
            }
        }
    return count;
}
int main(){
   vector<int> nums={1};
   cout<<firstMissingPositive(nums)<<endl;
  return 0;
}