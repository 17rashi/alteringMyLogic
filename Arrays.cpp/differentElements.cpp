/*You are given an array A of size N. You can change any array element to any other integer in one operation. Determine the minimum number of operations that are required such that no two adjacent elements are equal.

Input format

. The first line contains T denoting the number of test cases.

• The first line of each test case contains a single integer N.

• The second line of each test case contains N space-separated integers

denoting the elements of the array.
*/

//TEST CASES 
/*
3
6
111111  -3
6
123233  -1
4
1234    -0
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }   
      int m=0;
      for(int i=1;i<n;i++){
         if(arr[i]!=arr[i-1]){
            continue;
         }
         else
         {
            m++;
            if(arr[i]==arr[i+1]){
               i++;
            }
         }
      }
      cout<<m<<endl;
   }
  return 0;
}