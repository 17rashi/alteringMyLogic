//https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

void insertAtSort(int num,stack<int> &stack)
{
	if(stack.empty() || stack.top()<num){
		stack.push(num);
		return;
	}
	int x=stack.top();
	stack.pop();
	insertAtSort(num,stack);
	stack.push(x);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()==true){
		return;
	}
	int num=stack.top();
	stack.pop();
	sortStack(stack);
	insertAtSort(num,stack);
}