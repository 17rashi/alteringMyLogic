#include<bits/stdc++.h>
using namespace std;
class Stack{
   public:
   int top;
   int size;
   int *arr;
   
   /*constructor*/
   Stack(int size){
      this -> size = size;
      arr = new int[size];
      top = -1;
   }
   void push(int x);
   void pop();
   int peek();
   bool isEmpty();
};

void Stack::push(int x){
   if(top>=size-1){
      cout<<"Stack overflow"<<endl;
   }
   else{
      arr[++top]=x;
      cout<<x<<" pushed into stack"<<endl;
   }
}

void Stack::pop(){
   if(top>=0){
      cout<<arr[top]<<" Pooped out from the stack"<<endl;
      top--;
   }
   else{
      cout<<"Stack underflow"<<endl;
   }
}

int Stack::peek(){
   if(top<0){
      cout<<"Stack is empty"<<endl;
      return -1;
   }
   return arr[top];
}

bool Stack::isEmpty(){
   if(top>=0){
      return false;
   }
   return true;
}

int main(){
   class Stack first(3);

   first.push(10);
   first.push(20);
   first.push(30);
   first.push(40);
   first.pop();
   cout<<first.peek()<<endl;
   cout<<first.isEmpty()<<endl;

   /*Print stack element*/
   // cout<<"Elements present in stack : ";
   //  while(!first.isEmpty())
   //  {
   //      cout<<first.peek()<<" ";
   //      first.pop();
   //  }
  return 0;
}