//In this problem we need to divide a rope in such a way that we will get the maximum number of pieces

#include<bits/stdc++.h>
using namespace std;
int numberOfCutInRope(int n,int a,int b,int c)
{
  if(n==0)
    return 0;
  if(n<0)
    return -1;
  int res=max(numberOfCutInRope(n-a,a,b,c),max(numberOfCutInRope(n-b,a,b,c),numberOfCutInRope(n-c,a,b,c))); //we are returning the maximum because we want to cut the rope maximum times.
  if(n==-1)
    return -1;
  return res+1;
}
int main(){
   int n;
   int a,b,c;
   cin>>n>>a>>b>>c;
   cout<<numberOfCutInRope(n,a,b,c);
  return 0;
}

//if we cut (n-a or n-b or n-c) we will return the maximum among all these so that the rope length is smallest one.