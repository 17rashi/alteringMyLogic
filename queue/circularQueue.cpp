#include<bits/stdc++.h>
using namespace std;
class Queue{
   public:
   int front;
   int rear;
   int *arr;
   int size= 10000;

   Queue(int s){
      front=rear=-1;
      size = s;
      arr = new int[size];
   }
   void enQueue(int x);
   void deQueue();
   // void enQueue(int x);
};

void Queue::enQueue(int value){
   if((rear == size -1 && front == 0) || (rear == (front-1)%(size-1))){ //rear = front -1 also work.
      cout<<"Queue is full"<<endl;
      return;
   }
   else if(front==-1){ //for inserting 1st element in empty queue
      front=rear=0;
      arr[rear]=value;
   }
   else if(rear == size -1 && front!=0){
      rear=0;
      arr[rear]=value;
   }
   else{
      rear++;
      arr[rear]=value;
   }
   cout<<value<<" is inserted"<<endl;
}

void Queue::deQueue(){
   if(front==-1){
      cout<<"Queue is empty"<<endl;
      return;
   }
   int data=arr[front];
   arr[front]=-1;
   if(front==rear){
      front=-1;
      rear=-1;
   }
   else if(front==size-1){
      front=0;
   }
   else{
      front++;
   }
   cout<<data<<" is deleted"<<endl;
   return;
}


int main(){
  Queue q(4);
  q.enQueue(50);
  q.enQueue(80);
  q.enQueue(30);
  q.enQueue(60);
  q.enQueue(30);
  q.deQueue();
  q.deQueue();
  q.enQueue(20);
  q.enQueue(10);
  return 0;
}