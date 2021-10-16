#include<bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while(T--)
   {
      int draw=0,India=0,England=0;
      int arr[5];
      for(int i=0;i<5;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<5;i++)
      {
         if(arr[i]==0)
         {
            draw++;
            cout<<draw<<" ";
         }
         else if(arr[i]==1)
         {
            India++;
            cout<<India<<" ";
         }
         else if(arr[i]==2)
         {
            England++;
            cout<<England<<" ";
         }
      }
      if(India>England)
      {
         cout<<"India"<<endl;
      }
      else if(England>India)
      {
         cout<<"England"<<endl;
      }
      else
      {
         cout<<"Draw"<<endl;
      }
      
      
   }
  return 0;
}