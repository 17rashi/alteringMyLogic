//https://mycode.prepbytes.com/problems/arrays/SMLGRTNUM
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int N,K,count=0,counter=0,end=0;
      cin>>N>>K;
      int arr[N];
      for(int i=0;i<N;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<N;i++)
      {
         if(arr[i]<K)
            count++;
         if(arr[i]>K)
            end++;
         if(arr[i]==K)
            counter++;
      }
      cout<<count<<" "<<end<<" "<<counter<<endl;

   }
  return 0;
}