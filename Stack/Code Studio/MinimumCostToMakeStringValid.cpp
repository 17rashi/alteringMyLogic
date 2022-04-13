//https://www.codingninjas.com/codestudio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0

#include<stack>
int findMinimumCost(string s) {
  // Write your code here
	stack<char> st;
	int count=0;
	for(int i=0;i<s.length();i++){
		if(st.empty()==true){
			st.push(s[i]);
		}
		else if((st.top()=='{' && s[i]=='}')){
			st.pop();
		}
		else{
			st.push(s[i]);
		}
	}
	if(st.size()%2!=0){
		return -1;
	}
	while(st.empty()==false){
		char ch=st.top();
		st.pop();
		if(ch==st.top()){
			count++;
			st.pop();
		}
		else{
			count+=2;
			st.pop();
		}
	}
	return count;
}