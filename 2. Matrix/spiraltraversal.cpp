//printing a matrix in spiral form 

#include<bits/stdc++.h>
using namespace std;
const int n=4;
const int m=4;
int main(){
   int arr[n][m];
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
         cin>>arr[i][j];
      }
   }
   int left=0,top=0,right=n-1,bottom=m-1;
   while(top<=bottom && left<=right)
   {
      for(int i=left;i<=right;i++)
      {
         cout<<arr[top][i]<<" ";
      }
      top++;
      for(int i=top;i<=bottom;i++)
      {
         cout<<arr[i][right]<<" ";
      }
      right--;
      if(top<=bottom)
      {
         for(int i=right;i>=left;i--)
         {
            cout<<arr[bottom][i]<<" ";
         }
         bottom--;
      }
      if(left<=right)
      {
         for(int i=bottom;i>=top;i--)
         {
            cout<<arr[i][left]<<" ";
         }
         left++;
      }
   }
  return 0;
}