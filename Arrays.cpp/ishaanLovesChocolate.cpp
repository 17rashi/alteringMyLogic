//https://practice.geeksforgeeks.org/problems/ishaan-loves-chocolates2156/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// Driver Code Ends
int chocolates(int arr[], int n)
{
    // Complete the function
    sort(arr,arr+n);
    return arr[0];
}
int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << chocolates(arr, n);
        cout << endl;
        
    }

}
