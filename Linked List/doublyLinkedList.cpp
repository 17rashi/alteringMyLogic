#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node* prev;
};

/* Insertion at head*/

void insertAtFront(Node* &first,int data){
   Node* temp = new Node();

   temp -> data = data;
   temp -> prev = NULL;
   temp -> next = first;

   first -> prev = temp;
   first=temp;
}

/*Insertion at tail*/

void insertAtTail(Node* &third, int data){
   Node* temp = new Node();
   temp -> data = data;
   if(third -> next == NULL){
      temp -> next =NULL;
      third -> next = temp;
      temp -> prev = third;
   }
   third = temp;
}

/*Insertion at any position*/

void insertatPos(Node* &head,int pos,int data){
   if(pos == 1){
      insertAtFront(head,data);
      return;
   }
   Node* temp = head;
   int count=0;
   while(count<pos){
      temp = temp -> next;
      count++;
   }
   Node* newNode = new Node();
   newNode -> data = data;

   if(temp -> next != NULL){
      newNode -> next = temp -> next;
      newNode -> prev = temp;
      temp -> next = newNode;
   }
   else{
      newNode -> next = NULL;
      temp -> next = newNode;
      newNode -> prev = temp;
   }
   temp = newNode;
}

/* Deletion at any position*/
/*
Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
       Node* temp = head_ref;
       if(x==1){
           head_ref = temp -> next;
           delete temp;
           return head_ref;
       }
       int count = 1;
       while(count<x){
           count++;
           temp = temp -> next;
           
       }
       if(temp -> next == NULL){
           temp -> prev -> next = NULL;
           delete temp;
           return head_ref;
       }
       temp -> prev -> next = temp -> next;
       temp -> next -> prev = temp -> prev;
       delete temp;
       return head_ref;
    }
*/

Node* deleteNode(Node* &head){
   Node* temp = head;
   while(temp->next!=NULL){
      temp = temp->next;
   }
   cout<<endl<<temp->data<<endl;
   temp -> prev -> next  = NULL;
   delete temp;
   return head;
}
void print(Node* &first){
   Node* temp=first;
   while(temp != NULL){
      cout<<temp -> data <<" ";
      temp = temp -> next;
   }
   cout<<endl;
}
int main(){
   Node* first = new Node();
   Node* second = new Node();
   Node* third = new Node();

   first -> data = 20;
   second -> data = 30;
   third -> data = 40;

   first -> next = second;
   first -> prev = NULL;

   second -> next = third;
   second -> prev = first;

   third -> next = NULL;
   third -> prev = second;

   cout<<"Original DLL : ";
   print(first);
   
   cout<<endl<<"Insertion at head : ";
   insertAtFront(first,10);
   print(first);

   cout<<endl<<"Insertion at tail : ";
   insertAtTail(third,50);
   insertAtTail(third,200);
   print(first);

   cout<<endl<<"Insertion after certain position : ";
   insertatPos(first,1,1);
   print(first);

   cout<<endl;
   deleteNode(first);
   print(first);
   return 0;
}