//https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875/

void insertAtBottom(int num,stack<int> &stack)
{
	if(stack.empty()==true){
		stack.push(num);
		return;
	}
	int x=stack.top();
	stack.pop();
	insertAtBottom(num,stack);
	stack.push(x);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
	if(stack.empty()==true){
		return;
	}
	int num=stack.top();
	stack.pop();
	reverseStack(stack);
	insertAtBottom(num,stack);
}