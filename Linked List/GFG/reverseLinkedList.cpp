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

Node* reverseL(Node* curr,Node* prev){
   if(curr == NULL){
      return prev;
   }
   Node* next = curr -> next;
   curr -> next = prev;
   return reverseL(next,curr);
}

void print(Node* head){
   Node* temp = head;
   while(temp!=NULL){
      cout<<temp->data<<" ";
      temp = temp -> next;
   }
   cout<<endl;
}

int main(){
   Node *first = new Node(10);
   Node *second = new Node(20);
   Node *third = new Node(90);
   Node *fourth = new Node(70);

   first -> next = second;
   second -> next = third;
   third -> next = fourth;
   fourth -> next = NULL;
   Node* temp = first;
   Node* rev= first;
   
   rev = reverseL(rev,NULL);
   print(rev);
   print(temp);
  return 0;
}