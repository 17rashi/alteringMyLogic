//https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

/*
#include<bits/stdc++.h>
using namespace std;
void firstAndLastPosition(int arr[],int n,int k){
   int m,count=0;
   for(int i=0;i<n;i++){
      if(arr[i]==k){
         m=i;
         count++;
      }
   }
   if(count>0){
     cout<<(m-count+1)<<" "<<m<<endl;
   }
   else{
      cout<<-1<<" "<<-1<<endl;
   }
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      int arr[n];
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      firstAndLastPosition(arr,n,k);
   }
  return 0;
}
*/ 


//Optimised Approach

/*
    Time Complexity : O(N)
    Space Complexity : O(1)

    where N is the length of array.
*/

#include<bits/stdc++.h>
using namespace std;
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int first = -1;
    int last = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            if(first == -1)
            {
                first = i;
                last = i;
            }
            else
            {
                last = i;
            }
        }
    }

    return make_pair(first, last);
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      vector<int> arr;
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      pair<int, int> p=firstAndLastPosition(arr,n,k);
      cout<<p.first<<" "<<p.second<<endl;
   }
  return 0;
}