//https://www.codechef.com/JAN222C/problems/EXAMTIME

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int Ddsa,Dtoc,Ddm;
      int Sdsa,Stoc,Sdm;
      cin>>Ddsa>>Dtoc>>Ddm;
      cin>>Sdsa>>Stoc>>Sdm;
      int sum1=Ddsa+Dtoc+Ddm;
      int sum2=Sdsa+Stoc+Sdm;
      if(sum1>sum2){
         cout<<"Dragon"<<endl;
      }
      else if(sum2>sum1){
         cout<<"Sloth"<<endl;
      }
      else if(sum1==sum2){
         if(Ddsa>Sdsa){
            cout<<"Dragon"<<endl;
         }
         else if(Sdsa>Ddsa){
            cout<<"Sloth"<<endl;
         }
         else if(Ddsa==Sdsa){
            if(Dtoc>Stoc){
               cout<<"Dragon"<<endl;
            }
            else if(Stoc>Dtoc){
               cout<<"Sloth"<<endl;
            }
            else{
               cout<<"Tie"<<endl;
            }
         }
      }
   }
  return 0;
}