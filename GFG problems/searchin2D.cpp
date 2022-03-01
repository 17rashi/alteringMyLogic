// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    int row=N-1;
	    int col=0;
	    while(row>=0 && col <= (M-1)){
	        if(mat[row][col]==X){
	            return 1;
	        }
	        else if(mat[row][col]>X){
	            row--;
	        }
	        else{
	            col++;
	        }
	    }
	    return 0;
	}
};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}  // } Driver Code Ends