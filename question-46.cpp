//https://www.codechef.com/CUPP2101/problems/MAXDIFF

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    long long int arr[n],sum1=0,sum2=0;
	    long long int total = 0;
	    for (int i = 0; i < n; i++) {
	        cin>>arr[i];
	        total+=arr[i];
	    }
	    sort(arr,arr+n);
	    for (int i = 0; i < k; i++) {
	        sum1+=arr[i];
	    }
	    for (int i = n-1; i>=k; i--) {
	        if(k>0){
	            sum2+=arr[i];
	            k--;
	        }
	    }
	    cout<<max(abs(sum1-(total-sum1)), abs(sum2-(total-sum2)))<<endl;
	}
	return 0;
}
