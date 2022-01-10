//https://practice.geeksforgeeks.org/problems/display-longest-name0853/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays#

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string longest(string names[], int n)
    {
        string max=names[0];
        for(int i=1;i<n;i++){
            if(names[i].length()>max.length()){
                max=names[i];
            }
        }
        return max;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}