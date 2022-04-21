#include<bits/stdc++.h>
using namespace std;
int main(){
   queue<int> q;
   q.push(20);
   q.push(30);
   q.push(40);

   cout<<q.size()<<endl;
   while(q.size()!=0){
      cout<<q.front()<<endl;
      q.pop();
   }

   
  return 0;
}