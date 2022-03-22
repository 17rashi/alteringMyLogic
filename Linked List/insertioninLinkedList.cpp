#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node *next;
};

/*Insertion at the head */

void insertatHead(Node* &head, int new_data){
   Node *newNode = new Node();

   newNode -> data = new_data;
   newNode -> next = head; 
   head = newNode;
}

/*Insertion at the tail*/ 

void insertatTail(Node* &tail, int data){
   Node *newNode2 = new Node();

      newNode2 -> data = data;
      tail -> next = newNode2;
      tail = newNode2;
}

/*Insert at the middle */

void insertatMiddle(Node* &head,int place,int data){
   Node* newNode3 = head;

   int cnt = 1;
   while(cnt<place-1){
      newNode3 = newNode3 -> next;
      cnt++;
   }

   Node *nodeToInsert = new Node();
   nodeToInsert -> data = data;
   nodeToInsert -> next = newNode3 -> next;
   newNode3 -> next = nodeToInsert;
}

/* to Print the Linked List*/

void print(Node *head){
   while(head!=NULL){
      cout<<head -> data<<" ";
      head = head ->next;
   }
}

int main(){
   Node *first = new Node();
   Node *second = new Node();
    
   Node *head = first;
   Node *tail = second;

   first -> data = 10;
   first -> next = second;

   second -> data = 20;
   second -> next = NULL;

   print(head);
   insertatHead(head,40);
   insertatHead(head,60);
   cout<<endl<<endl<<"After inserting at Head : ";
   print(head);
   cout<<endl;

   insertatTail(tail, 90);
   insertatTail(tail, 120);
   cout<<endl<<"After inserting at Tail : ";
   print(head);
   cout<<endl;
   
   insertatMiddle(head,4,100);
   cout<<endl<<"After inserting at middle : ";
   print(head);
   cout<<endl<<endl;
   
  return 0;
}