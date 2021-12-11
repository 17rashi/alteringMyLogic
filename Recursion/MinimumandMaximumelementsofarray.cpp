//https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/


//my solution
/*
#include<bits/stdc++.h>
using namespace std;
void minandmaxelement(int arr[],int n,int min,int max,int m){
   for(int i=0;i<n;i++)
   {
      if(arr[i]<min){
        min=arr[i];
        {
           if(arr[i]>max){
              max=arr[i];
              return minandmaxelement(arr,n,min,max,m-1);
           }
           else{
              return minandmaxelement(arr,n,min,max,m-1);
           }
        }        
      }
      else if(arr[i]>max)
      {
         max=arr[i];
         return minandmaxelement(arr,n,min,max,m-1);
      }
   }
   cout<<min<< " "<<max<<" ";
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int m=n;
   int min=INT_MAX;
   int max=INT_MIN;
   minandmaxelement(arr,n,min,max,m);
  return 0;
}
*/

//OPTIMIZED SOLUTION

#include<bits/stdc++.h>
using namespace std;
int minelement(int arr[],int n){
   if(n==0)
      return arr[0];
   return min(arr[n-1],minelement(arr,n-1));
}
int maxelement(int arr[],int n){
   if(n==1)
      return arr[0];
   return max(arr[n-1],maxelement(arr,n-1));
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   cout<<minelement(arr,n)<<endl;
   cout<<maxelement(arr,n);
  return 0;
}