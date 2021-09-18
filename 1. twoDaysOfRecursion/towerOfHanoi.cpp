#include<bits/stdc++.h>
using namespace std;
void TOH(int n,char rod1,char helping_rod,char to_rod)
{
   if(n==1)
   {
      cout<<"Move 1 from "<<rod1<<" to "<<to_rod<<endl;
      return;
   }
   TOH(n-1,rod1,to_rod,helping_rod);
   cout<<"Move "<<n<<" from "<<rod1<<" to "<<to_rod<<endl;
   TOH(n-1,helping_rod,rod1,to_rod);
}
int main(){
   int n;
   cin>>n;
   char A,B,C;
   TOH(n,'A','B','C');
  return 0;
}