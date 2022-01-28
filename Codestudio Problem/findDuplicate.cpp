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