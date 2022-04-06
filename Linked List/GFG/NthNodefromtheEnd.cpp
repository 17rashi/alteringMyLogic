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

/*Nth Node from the end of Linked List */

int NthNode(Node* head,int n){
   Node* ptr1=head;
   Node* ptr2=head;
   int count=0;
   while(ptr2!=NULL && count<n){
      ptr2=ptr2->next;
      count++;
   }
   while(ptr2!=NULL){
      ptr1=ptr1->next;
      ptr2=ptr2->next;
   }
   return ptr1->data;
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
   Node *third = new Node(30);
   Node *fourth = new Node(40);
   Node *fifth = new Node(50);
   Node *sixth = new Node(60);
   Node *seventh = new Node(70);

   first -> next = second;
   second -> next = third;
   third -> next = fourth;
   fourth -> next = fifth;
   fifth -> next = sixth;
   sixth -> next = seventh;
   seventh -> next = NULL;

   print(first);
   cout<<endl<<NthNode(first,1);
  return 0;
}