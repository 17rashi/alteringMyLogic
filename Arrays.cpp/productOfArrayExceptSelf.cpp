#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        int product=1,count=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                product=product*nums[i];
            }
            else{
                count++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(count>=2){
                v.push_back(0);
            }
            else if(count>0){
                if(nums[i]==0){
                    v.push_back(product);
                }
                else{
                    v.push_back(0);
                }
            }
            else{
                int ans=product/nums[i];
                v.push_back(ans);
            }
        }
        return v;
    }
int main(){
  int n;
  cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++){
     int a;
     arr.push_back(a);
  } 
  vector<int> ans=productExceptSelf(arr);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  return 0;
}