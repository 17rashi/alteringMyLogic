#include<bits/stdc++.h>
vector<int> firstNegativeInteger(vector<int> &arr, int k, int n)
{
	deque<int> dq;
	vector<int> ans;
	for(int i=0;i<k;i++){
		if(arr[i]<0){
			dq.push_back(i);
		}
	}
	if(dq.size()>0){
		ans.push_back(arr[dq.front()]);
	}
	else{
		ans.push_back(0);
	}
	
	for(int i=k;i<n;i++){
		if(!dq.empty() && i-dq.front()>=k){
			dq.pop_front();
		}
		if(arr[i]<0){
			dq.push_back(i);
		}
		if(dq.size()>0){
			ans.push_back(arr[dq.front()]);
		}
		else{
			ans.push_back(0);
		}
	}
	return ans;
}

