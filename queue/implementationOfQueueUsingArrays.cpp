#include<bits/stdc++.h>
using namespace std;
class Queue{
   public:
   int size;
   int front;
   int rear;
   int *arr;

   Queue(){
      size=1000;
      arr = new int[size];
      front=0;
      rear=0;
   }

   void push(int x);
   void pop();
   void front1();
   bool isEmpty();
};

bool Queue::isEmpty(){
   return rear==front;
}

void Queue::push(int x){
    if(rear==size){
       cout<<"Queue is full."<<endl;
    }
    else{
       arr[rear]=x;
       rear++;
    }
}

void Queue::pop(){
   if(front==rear){
      cout<<"Queue is Empty."<<endl;
      return;
   }
   else{
      arr[front]=-1;
      front++;
      if(front==rear){
         cout<<"Queue is Empty"<<endl;
         return;
      }
   }
}

void Queue::front1(){
   if(front!=rear){
      cout<<arr[front]<<endl;
      return;
   }
   cout<<"Queue is Empty."<<endl;
}
int main(){
   class Queue first;

   first.push(20);
   first.push(40);
   first.push(70);

   first.pop();

   while(first.isEmpty()==false){
      first.front1();
      first.pop();
   }
  return 0;
}