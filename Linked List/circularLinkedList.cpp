#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int data){
    this -> data = data;
  }
};

/*insertion at the beggining */

//Naive Approach

Node* insertAtHead(Node* &head){
   Node* temp = new Node(50);
   if(head == NULL){
     temp -> next = temp;
   }
   else{
     Node* curr = head;
      while(curr -> next != head){
        curr = curr -> next;
      }
      curr -> next = temp;
      temp -> next = head;
   }
   head = temp;
   return head;
}

//Efficient Approach

Node* insertAtHead(Node* head){
   Node* temp = new Node(50);
   if(head == NULL){
     temp -> next = temp;
   }
   else{
      temp -> next = head -> next;
      head -> next = temp;
      int t = head -> data;
      head -> data = temp -> data;
      temp -> data = t;
   }
   return head;
}

/* Insertion at the End of CLL*/

Node* insertAtEnd(Node* &head){
  Node* curr = head;
  while(curr -> next != head){
    curr = curr -> next;
  }
  Node* newNode = new Node(70);
  curr -> next = newNode;
  newNode -> next = head;
  return head;
}

/*delete the head of CLL*/

Node* deleteHead(Node* &head){
    if(head == NULL){
      cout<<endl<<"LL is empty"<<endl;
      return NULL;
    }
    if(head -> next == head){
      cout<<endl<<"LL is empty"<<endl;
      delete(head);
      return NULL;
    }
    Node* curr = head;
    while(curr-> next != head){
      curr = curr -> next;
    }
    curr -> next = head -> next;
    //  delete(head);
    return curr-> next;
}

/*Printing a Linked List*/

void print(Node* head){
  Node* temp = head;
  do{
    cout<<head -> data <<" ";
    head = head -> next;
  }while(temp != head);
}

int main(){
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);

  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = head;

  // print(head);

  // Node* ans = insertAtHead(head);
  // print(ans);
  // cout<<endl;

  Node* res = insertAtEnd(head);
  print(res);

  cout<<endl;
  Node* ans = deleteHead(head);

  print(ans);
  cout<<endl;
  Node* ans1 = deleteHead(ans);
  print(ans1);

  cout<<endl;
  Node* ans2 = deleteHead(ans1);
  print(ans2);

  cout<<endl;
  Node* ans3 = deleteHead(ans2);
  print(ans3);

  cout<<endl;
  Node* ans4 = deleteHead(ans3);
  print(ans4);


  return 0;
}
