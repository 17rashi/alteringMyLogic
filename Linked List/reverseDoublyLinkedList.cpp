#include<bits/stdc++.h>
using namespace std;
class Node{
   public: 
   int data;
   Node* next;
   Node* prev;
};

Node* reverse(Node* head){
   if(head == NULL || head -> next == NULL){
      return head;
   }
   Node* temp = NULL;
   Node* curr = head;
   while(curr!=NULL){
      temp = curr -> prev;
      curr -> prev = curr -> next;
      curr -> next = temp;
      curr = curr -> prev;
   }
   return temp -> prev; 
}

void print(Node* head){
   Node* temp = head;
   while(temp!=NULL){
      cout<<temp -> data <<" ";
      temp = temp -> next;
   }
}

int main(){
   Node* head = new Node();
   Node* second = new Node();
   Node* third = new Node();
   Node* fourth = new Node();

   head -> data = 10;
   second -> data = 20;
   third -> data = 30;
   fourth -> data = 40;

   head -> prev = NULL;
   head -> next = second;

   second -> prev = head;
   second -> next = third;

   third -> prev = second;
   third -> next = fourth;

   fourth -> prev = third;
   fourth -> next = NULL;

   print(head);
   cout<<endl;
   Node* ans = reverse(head);

   print(ans);
  return 0;
}