//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1#

#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(),array.end());
        long long int count=1;
        for(long long int i=0;i<n-1;i++){
            if(array[i]==count){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  