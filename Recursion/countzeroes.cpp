#include<bits/stdc++.h>
using namespace std;
void countZeroes(int num,int count){
   if(num==0){
      cout<<count<<endl;
      return;
   }
   if(num%10==0){
      countZeroes(num/10,count+1);
   }
   else{
      countZeroes(num/10,count);
   }
}
int main(){
   int num;
   cin>>num;
   countZeroes(num,0);
  return 0;
}