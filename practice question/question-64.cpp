//https://www.codechef.com/CUPP2101/problems/FORESTGA
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N,W,L;

ll cal_wood(ll t,ll H[],ll R[])
{
   ll woods=0;
   for(ll i=0;i<N;i++)
   {
      ll temp=H[i]+(R[i]*t);
      if(temp>=L)
      {
         woods+=temp;
      }
      if(woods>=W)
      {
         return woods;
      }
   }
   return woods;
}
int main(){
   cin>>N>>W>>L;
   ll H[N],R[N];
   for(ll i=0;i<N;i++)
   {
      cin>>H[i]>>R[i];
   }
   ll temp=cal_wood(0,H,R);
   if(temp>=W)
   {
      cout<<0<<endl;
   }
   else
   {
      ll i=1,j=1e+18;
      ll month=-1;
      while(i<=j)
      {
         ll mid=(i+j)/2;
         ll temp=cal_wood(mid,H,R);
         if(temp>=W){
            month=mid;
            j=mid-1;
         }
         else
         {
            i=mid+1;
         }
      }
      cout<<month<<endl;
   }
   
  return 0;
}