#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
};

Node* front = NULL;
Node* rear = NULL;


void push(int x){
   Node* newNode= new Node();
   newNode -> data = x;
   if(front==size){
      cout<<"Queue is full"<<endl;
   }
   else{
      newNode -> next = front1;
      front1 = newNode;
      rear++;
   }
}

void pop(){
   Node* nextNode = front1;
   while(nextNode->next!=NULL){
      nextNode = nextNode -> next;
   }
   if(rear!=front){
      Node* temp = nextNode;
      temp -> next = NULL;
      front++;
      delete(temp);
   }
   else{
      cout<<"Queue is Empty"<<endl;
   }
}

int main(){
   push(10);
   push(30);
   push(70);

   pop();

   while(front1!=NULL){
      cout<<front1->data<<endl;
      front1=front1->next;
   }
  return 0;
}