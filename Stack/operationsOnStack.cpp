#include<bits/stdc++.h>
using namespace std;
int main(){
   stack<int> first;
   first.push(3);
   first.push(5);
   first.push(8);
   first.push(7);
   first.push(0);

   cout<<"size of stack : "<<first.size()<<endl;
   cout<<"first element of stack : "<<first.top()<<endl;
   first.pop();
   cout<<"After perforing pop operation the first element would become : "<<first.top()<<endl;
   cout<<"Check whether stack is empty or not : "<<first.empty()<<endl;
  return 0;
}