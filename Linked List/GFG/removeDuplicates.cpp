#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node *next;
   Node(int data){
      this->data = data;
   }
};

Node* removeDuplicates(Node* head){
   Node* temp = head;
   cout<<endl<<"Deleting..."<<endl;
   while(temp->next!=NULL){
      if(temp->data == temp -> next -> data){
         Node* curr = temp->next;
         temp ->next= temp -> next ->next;
         delete(curr);
      }
      else
      {
         temp = temp ->next;
      }
   }
   return head;
}

void print(Node* head){
   Node* temp = head;
   while(temp!=NULL){
      cout<<temp->data<<" ";
      temp = temp -> next;
   }
}

int main(){
   Node *first = new Node(10);
   Node *second = new Node(20);
   Node *third = new Node(20);
   Node *fourth = new Node(30);
   Node *fifth = new Node(30);
   Node *sixth = new Node(30);
   Node *seventh = new Node(80);

   first -> next = second;
   second -> next = third;
   third -> next = fourth;
   fourth -> next = fifth;
   fifth -> next = sixth;
   sixth -> next = seventh;
   seventh -> next = NULL;

   print(first);
   first = removeDuplicates(first);
   print(first);
  return 0;
}