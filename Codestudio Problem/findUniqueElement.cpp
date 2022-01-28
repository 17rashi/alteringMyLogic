//https://www.codingninjas.com/codestudio/problems/find-unique_625159

/*
#include<bits/stdc++.h>
int findUnique(int *arr, int size)
{
    //Write your code here
    std::sort(arr,arr+size);
    for(int i=0;i<size-1;i++){
		if(arr[i]!=arr[i+1]){
			return arr[i];
        }
        else{
			i++;
        }
    }
    return arr[size-1];
}
*/

#include<bits/stdc++.h>
using namespace std;
int findUnique(int *arr, int n)
{
    //Write your code here
    int ans=0;
    for(int i=0;i<n;i++){
       ans=ans^arr[i];
       cout<<ans<<" "<<arr[i]<<endl;
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
   cout<<findUnique(arr,n)<<endl;
  return 0;
}