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

// void reverse(Node* &head){
//     Node* curr = head;
//     Node* prev = NULL;
//     Node* nextNode = NULL;
//     while(curr!=NULL){
//       nextNode= curr -> next;
//       curr -> next = prev;
//       prev = curr;
//       curr = nextNode;
//     }
//     head=prev;
// }

Node* Kreverse(Node* &head, int k,int size){
    if(head==NULL){
      return NULL;
    }

    Node* nextNode = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr!=NULL && count<k){
      nextNode = curr -> next;
      curr-> next = prev;
      prev = curr;
      curr=nextNode;
      count++;
    }

    if(nextNode!= NULL && k<size){
        head -> next = Kreverse(nextNode,k,size-k);
    }
    else{
      // while(head!=NULL){
          head-> next = nextNode;
      // }
    }
    return prev;
}

void print(Node* &head){
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp -> data<<" ";
    temp = temp -> next;
  }
  cout<<endl;
}

int main(){
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(40);
  Node* fourth = new Node(50);
  Node* fifth = new Node(60);
  Node* sixth = new Node(80);
  Node* seventh = new Node(70);
  Node* eighth = new Node(30);
  
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth -> next = seventh;
  seventh -> next = eighth;
  eighth -> next = NULL;
  
  // print(head);

  Node* ans = Kreverse(head,5,8-5);
  print(ans);
  

  return 0;
}