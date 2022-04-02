//https://leetcode.com/problems/reverse-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        while(curr!=NULL){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
};
*/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        // this -> next = NULL;
    }
};
void reverseLL(Node* &head){
    Node* prev = NULL;
    Node* nextNode = NULL;
    Node* curr = head;
    while(curr!=NULL){
        nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);  

  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = NULL;

  print(head);
  reverseLL(head);
  print(head);
  return 0;
}