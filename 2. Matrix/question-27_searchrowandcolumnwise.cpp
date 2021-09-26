//search in row-wise and column wise
#include<bits/stdc++.h>
using namespace std;
const int n=4,m=4;
void search(int arr[n][m],int x)
{
   int i=0,j=m-1;
   while(i<n && j>=0)
   {
      if(arr[i][j]==x)
      {
         cout<<i<<" "<<j<<endl;
         return;
      }
      if(arr[i][j]>x)
      {
         j--;
      }
      else
      {
         i++;
      }    
   }
   cout<<"Element not found"<<endl;
}
int main(){
   int arr[n][m];
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
         cin>>arr[i][j];
      }
   }
   int x; //element to be search in row and column
   cin>>x;
   search(arr,x);
  return 0;
}