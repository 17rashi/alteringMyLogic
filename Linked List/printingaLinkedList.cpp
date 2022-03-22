#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
};
// void print(Node *head){
//    while(head!=NULL){
//       cout<<head -> data<<" ";
//       head = head ->next;
//    }
// }
int main(){
   Node *head = new Node();
   Node *second = new Node();
   Node *third = new Node();
   head -> data = 1; //value stored in head
   head -> next = second; //pointing head to the next node i.e., second

   second -> data = 20; // vlaue stored in second node
   second -> next = third; //make it point to third node i.e., three

   third -> data = 30; //value stored in third node
   third -> next = NULL; //make it point to null as it will be last node

   // print(head);
   /*To print the linked List*/
   while(head != NULL){
      cout<<head -> data<<" ";
      // cout<<head -> next<<endl;
      head = head ->next;
   }
  return 0;
}

