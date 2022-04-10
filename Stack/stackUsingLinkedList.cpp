#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
};

Node* top = NULL;

void peek(){
   if(top==NULL){
      cout<<"stack is empty"<<endl;
   }
   else{
      cout<<"Top of stack is "<<top->data<<endl;
   }
}

bool isEmpty(){
   if(top==NULL){
      return true;
   }
   return false;
}

void push(int val){
   Node* newNode = new Node();
   newNode->data = val;
   newNode->next = top;
   top = newNode;
}

void pop(){
   if(top!=NULL){
      Node* temp = top;
      top = top -> next;
      delete(temp);
   }
   else{
      cout<<"Stack is empty"<<endl;
      return;
   }
}
int main(){
   push(20);
   push(30);
   push(40);
   peek();
   pop();
   peek();
  return 0;
}