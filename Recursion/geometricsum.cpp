#include<iostream>
using namespace std;
double exp(int x,int n){
   static double p=1,f=1;
   double result;
   if(n==0)
   {
      return 1;
   }
   result= exp(x,n-1);
   f=f*2;
   // cout<<result<<endl;
   return result+p/f;
}
int main(){
   int x=2,n;
   cin>>n;
   cout<<exp(x,n);
   return 0;
}