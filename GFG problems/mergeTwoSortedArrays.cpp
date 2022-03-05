//https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1#

/*
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                ans.push_back(arr[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
*/

/*
#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int m,int arr2[],int n){
    int temp[m+n];
    for(int i=0;i<m;i++){
        temp[i]=arr1[i];
    }
    for(int j=0;j<n;j++){
        temp[j+m]=arr2[j];
    }
    sort(temp,temp+m+n);
    for(int i=0;i<m+n;i++){
        cout<<temp[i]<<" ";
    }
}
int main(){
   int arr1[]={1,2,3,4,7};
   int arr2[]={3,4,5,8,9};
   int m=sizeof(arr1)/sizeof(arr1[0]);
   int n=sizeof(arr2)/sizeof(arr2[0]);
   merge(arr1,m,arr2,n);
  return 0;
}
*/

//Merge without using extra space

//https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1/?page=2&category[]=Arrays&sortBy=submissions#

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=n-1,j=0;
	    while(i>=0 && j<m){
	        if(arr1[i]>arr2[j]){
	            swap(arr1[i],arr2[j]);
	            i--;
	        }
	        else{
	            j++;
	        }
	         
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
};