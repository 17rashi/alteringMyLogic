/*TAYLOR SERIES
IT IS EXPONENTIAL TYPE OF SERIES

FORMULA FOR TAYLOR SERIES IS:
1+x/1!+x^2/2!+x^3/3!.........x^n/n!
*/

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
   p=p*x;
   f=f*n;
   return result+p/f;
}
int main(){
   int x,n=10;
   cin>>x;
   cout<<exp(x,n);
  return 0;
}