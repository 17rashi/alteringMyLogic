#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   string str;
   int sum=0;
   while(cin>>t)
   {
      for(int i=0;i<t;i++)
      {
      cin>>str;
      if(str=="Tetrahedron")
         sum+=4;
      else if(str=="Cube")
         sum+=6;
      else if(str=="Octahedron")
         sum+=8;
      else if(str=="Dodecahedron")
         sum+=12;
      else if(str=="Icosahedron")
         sum+=20;
      }
      cout<<sum<<endl;
      // sum=0;
   }
  return 0;
}