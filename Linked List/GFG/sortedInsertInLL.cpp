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

Node* sortedInsert(Node* &head,int newData){
   Node* temp = head;
   if(newData < head -> data){
      Node* newNode1 = new Node(newData);
      newNode1 -> next = head;
      return newNode1;
   }
   while(temp -> next !=NULL && temp->next->data < newData){
      temp = temp -> next;
   }
   Node* newNode = new Node(newData);
   if(temp->next== NULL){
      newNode->next = NULL;
      temp -> next = newNode;
      return head;
   }
   newNode -> next = temp -> next;
   temp -> next = newNode;
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
   Node *third = new Node(30);
   Node *fourth = new Node(40);

   first -> next = second;
   second -> next = third;
   third -> next = fourth;
   fourth -> next = NULL;

   first=sortedInsert(first,5);
   print(first);
  return 0;
}