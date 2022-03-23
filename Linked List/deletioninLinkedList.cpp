#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node *next;
};

//Priniting a Linked List

void print(Node *head){
   while(head != NULL){
      cout<<head -> data <<" ";
      head = head -> next;
   }
}

//deleting the first node
/*
void deleteaNode(Node* &head){
   Node* temp = head;
   head = head -> next; //move head pointer to next node
   delete temp;
}
*/

//deleting after a certian position

void deleteAfterNode(Node* &curr_node,int node)
{
   if(curr_node-> data == node){ //check whether first node is the node to be delete or not
      Node* temp = curr_node;
      curr_node = curr_node->next;
      delete temp;
   }
   else{
      Node *current = curr_node;
      while(current -> next != NULL){
         if(current -> next -> data == node){
            Node* temp = current;
            temp = current -> next;
            current -> next = current -> next -> next;
            delete temp;
            break; 
         }
         else{
            current = current -> next;
         }
      }
   }
}

int main(){
   Node* head = new Node();
   Node *second = new Node();
   Node *third = new Node();
   Node *fourth = new Node();

   head -> data = 10;
   head -> next = second;

   second -> data = 20;
   second -> next = third;

   third -> data =30;
   third -> next = fourth;

   fourth -> data = 40;
   fourth -> next = NULL;

   print(head);
   cout<<endl;

   // deleteaNode(head);
   // print(head);

   // deleteaNode(head);
   // print(head);
   deleteAfterNode(head,30);
   print(head);
   cout<<endl;
  return 0;
}