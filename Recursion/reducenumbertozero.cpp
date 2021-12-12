//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

/*
class Solution {
    int count=0;
public:
    int numberOfSteps(int num) {
    if(num==0){
      return count;
    }
    if(num%2==0){
        count++;
      return numberOfSteps(num/2);
    }
        count++;
      return numberOfSteps(num-1); 
    }
};
*/

#include<bits/stdc++.h>
using namespace std;
int numberofsteps(int num,int count){
   if(num==0){
      return count;
   }
   if(num%2==0){
      return numberofsteps(num/2,count+1);
   }
   return numberofsteps(num-1,count+1);
}
int main(){
   int num;
   cin>>num;
   cout<<numberofsteps(num,0);
  return 0;
}