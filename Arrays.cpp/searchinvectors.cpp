#include<bits/stdc++.h>
using namespace std;
int search(vector<int> V,int key){
   for(int i=0;i<V.size();i++){
      if(V[i]==key){
         return i;
      }
   }
   return -1;
}
int main(){
   vector<int> V;
   int x,a,key;
   cin>>x;
   for(int i=0;i<x;i++){
      cin>>a;
      V.push_back(a);
   }
   cin>>key;
   cout<<search(V,key);
  
  return 0;
}