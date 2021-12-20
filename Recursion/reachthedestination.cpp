//https://www.codingninjas.com/codestudio/problems/reach-the-destination_992853

#include<bits/stdc++.h>
using namespace std;
// bool reachDestination(int sx,int sy,int dx,int dy){
//    if(sx==dx && sy==dy){
//       return true;
//    }
//    if(sx>dx || sy>dy){
//        return false;
//    }
//    return (reachDestination(sx,sy+sx,dx,dy)||reachDestination(sx+sy,sy,dx,dy));
// }
bool reachDestination(int sx, int sy, int dx, int dy) { //optimize solution
    // Write your code 
   if(sx>dx || sy>dy)
       return false;
   if(sx==dx && sy==dy)
      return true;
    if(dx>dy){
        return reachDestination(sx,sy,dx-dy,dy);
	}
    return reachDestination(sx,sy,dx,dy-dx);
}
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int sx,sy,dx,dy;
      cin>>sx>>sy>>dx>>dy;
      cout<<reachDestination(sx,sy,dx,dy)<<endl;
   }
  return 0;
}