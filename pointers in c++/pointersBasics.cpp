#include <iostream>
using namespace std;
/*
int main()
{
  int arr[] = {4, 5, 6, 7};
  int *p = (arr + 1);
  cout<< *p <<endl;
  cout << *arr + 9;
  return 0;
}
*/

void square(int *p){
 int a = 10;
  p = &a;
 *p = (*p) * (*p);
  cout<< *p<<endl;
}

int main(){
   //  int a = 10;
   //  square(&a);
   //  cout << a << endl;


   // int a = 10;
   // int *p = &a;
   // int **q= &p;

   // cout<<a<<" "<<*p<< " "<<**q<<endl;
   // cout<<&a<<" "<<p<<" "<<*q<<endl;

   // cout<<a<<" "<<*p<<" "<<**q<<endl;

   // a=++a;
   // *p=*p+1;
   // **q=**q+1;
   // cout<<a<<" "<<*p<<" "<<**q<<endl;

   int arr[5]={1,2,3,4,5};
   int *p=&arr[3];
   cout<<*(p+1)<<endl;
   cout<<*((&arr)+4)<<endl;
}