//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#

#include<bits/stdc++.h>
using namespace std;
int kthSmallestElement(int arr[],int n,int k){
   sort(arr,arr+n);
   return arr[k-1];
}
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int k;
   cin>>k;
   cout<<kthSmallestElement(arr,n,k)<<endl;
  return 0;
}

// { Driver Code Starts
//Initial function template for C++
/*
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int m=r+1;
        sort(arr,arr+m);
        return arr[k-1];
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
} */