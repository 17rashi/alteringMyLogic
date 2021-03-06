//Maximum value of arr[j]-arr[i] such that j>i

//NAIVE SOLUTION
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
   int max=INT_MIN;
   int arr[]={30,10,8,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[j]-arr[i]>max){
            max=arr[j]-arr[i];
         }
      }
   }
   cout<<max<<endl;
  return 0;
}
*/

//OPTIMISED SOLUTION

#include<bits/stdc++.h>
using namespace std;
int maxDifference(int arr[],int size){
   int res=arr[1]-arr[0], minVal=arr[0];
   for(int j=1;j<size;j++){
      // cout<<res<<" ";
      res=max(res,arr[j]-minVal);
      minVal=min(minVal,arr[j]);
   }
   return res;
}
int main(){
   int arr[]={2,3,10,6,4,8,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<maxDifference(arr,size)<<endl;
  return 0;
}


//Optimized approach

// #include<bits/stdc++.h>
// using namespace std;
// int maxDifference(int arr[],int n){
//    int min_element=arr[0],max_diff=0,diff=0;
//    int max_element=0;
//    int p=0,q=0;
//    for(int i=1;i<n;i++){
//       if(arr[i]<min_element){
//          p=i;
//          min_element=arr[i];
//       }
//       if(arr[i]>max_element){
//          q=i;
//          max_element=arr[i];
//       }
//       if(p<q){
//          diff=max_element-min_element;
//       }
//       max_diff=max(max_diff,diff);
//    }
//    return max_diff;
// }
// int main(){
//    int arr[]={80, 2, 6, 3, 100};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    cout<<maxDifference(arr,size)<<endl;
//   return 0;
// }