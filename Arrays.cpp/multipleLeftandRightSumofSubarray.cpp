//https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum1555/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays#

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int sum1=0,sum2=0;
    // Complete the function
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            sum1+=arr[i];
        }
        for(int i=n/2;i<n;i++){
            sum2+=arr[i];
        }
        cout<<sum1*sum2<<endl;
    }
    else{
        for(int i=0;i<(n-1)/2;i++){
            sum1+=arr[i];
        }
        for(int i=(n-1)/2;i<n;i++){
            sum2+=arr[i];
        }
        cout<<sum2*sum1<<endl;
    }
  return 0;
}