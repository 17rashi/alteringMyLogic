#include<bits/stdc++.h>
using namespace std;
int n1=0,n2=1,n3=0;
void fibnocci(int count)
{
   if(count>0)
   {
      n3=n1+n2;
      cout<<n3<<" ";
      n1=n2;
      n2=n3;
      fibnocci(count-1);
   }
}
int main(){
   int count=5;
   cout<<n1<<" "<<n2<<" ";
   fibnocci(count-1);
  return 0;
}