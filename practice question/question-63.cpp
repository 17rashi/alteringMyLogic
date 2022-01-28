//https://www.codechef.com/NOV21C/problems/CHEAPFUEL

#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--)
  {
    int X,Y,A,B,K;
    cin>>X>>Y>>A>>B>>K;
    int POP,POD;
    POP=X+K*A;
    POD=Y+K*B;
    if(POP>POD)
    {
      cout<<"DIESEL"<<endl;
    }
    else if(POD>POP)
    {
      cout<<"PETROL"<<endl;
    }
    else
    {
      cout<<"SAME PRICE"<<endl;
    }
    
  }
  return 0;
}