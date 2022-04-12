//https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166/

void solve(stack<int>&inputStack,int x){
	if(inputStack.empty()==true){
		inputStack.push(x);
		return;
	}
	int num=inputStack.top();
	inputStack.pop();
	solve(inputStack,x);
	inputStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
// 	int len=myStack.size();
// 	int count=0;
// 	stack<int> ans;
	solve(myStack,x);
	return myStack;
}
