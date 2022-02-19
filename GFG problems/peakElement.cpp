//https://practice.geeksforgeeks.org/problems/peak-element/1#
#include<bits/stdc++.h>
using namespace std;
int peakElement(int arr[], int n)
{
   // Your code here
   int res=0;
   for(int i=0;i<n;i++){
      if((arr[i]>arr[res] && arr[i]>arr[i+1]) || i==n-1 && arr[i]>arr[res]){
         res=i;
      }
   }
   return res;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<peakElement(a,n);
	}

	return 0;
}  

//https://leetcode.com/problems/find-peak-element/

/*
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        if(nums[n-1]>nums[n-2]){
            return n-1;
        }
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
               return i;
            }
        }
        return 0;
    }
};
*/