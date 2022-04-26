// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++

int minimum=-1;
//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
    stack<int> s;
   // your code here
   for(int i=0;i<n;i++){
        if(s.empty()){
           s.push(arr[i]);
           minimum=arr[i];
        }
        else{
            if(minimum>arr[i]){
                int ans=2*arr[i]-minimum;
                minimum=arr[i];
                s.push(ans);
            }
            else{
                s.push(arr[i]);
            }
        }
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    
    while(s.empty()==false){
        if(s.top()>minimum){
            cout<<minimum<<" ";
            s.pop();
        }
        else{
            cout<<minimum<<" ";
            minimum=2*minimum-s.top();
            s.pop();
        }
    }
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}

  // } Driver Code Ends