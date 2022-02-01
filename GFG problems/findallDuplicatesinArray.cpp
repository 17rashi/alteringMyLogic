//https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1#

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        int count=0;
        vector<int> v;
        vector<int> ans={-1};
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
            else{
                if(count>=1){
                    v.push_back(arr[i]);
                    count=0;
                }
            }
        }
        if(v.size()>0)
            return v;
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}