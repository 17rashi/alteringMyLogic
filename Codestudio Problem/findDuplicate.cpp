//https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602
/*
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    for(int i=0;i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
			if(arr[i]==arr[j]){
				return arr[i];
        	}
        }
    }
    return -1;
}
*/

#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[],int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^arr[i];
	}
	for(int i=1;i<n;i++){
		ans=ans^i;
	}
	return ans;
}
int main(){
	int n;
   cin>>n;
   int arr[1000];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   cout<<findDuplicate(arr,n)<<endl;
  return 0;
}


//Find all Duplicates, leetcode solution

//https://leetcode.com/problems/find-all-duplicates-in-an-array/
/*
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> V;
        int len=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<len-1;i++){
            if(nums[i]==nums[i+1]){
                V.push_back(nums[i]);
            }
        }
        return V;
    }
};

*/