#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node* next;

   Node(int x){
      this->data=x;
      next = NULL;
   }
};

class Queue{
   public:
   Node* rear;
   Node* front;
   Queue(){
      front=NULL;
      rear=NULL;
   }

   void enQueue(int data){
      Node* temp = new Node(data);
      if(front==NULL && rear==NULL){
         front = rear = temp;
         // return;
      }
      else{
         rear->next = temp;
         rear = temp;
      }
      cout<<data<<" is inserted"<<endl;
   }

   void deQueue(){
      if(front==NULL && rear==NULL){
         cout<<"Queue is empty"<<endl;
         return;
      }
      Node* temp = front;
      cout<<temp->data<<" is deleted"<<endl;
      front = front ->next;
      
      if(front==NULL){
         rear=NULL;
      }
      delete(temp);
   }
};


int main(){
   Queue q;
   q.enQueue(20);
   q.enQueue(40);
   q.enQueue(10);
   q.deQueue();
   q.enQueue(50);
   q.enQueue(30);
   q.deQueue();
  return 0;
}