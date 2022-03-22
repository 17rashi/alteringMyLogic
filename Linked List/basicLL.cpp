#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node *next;
   Node(int data){
      this -> data = data;
      this -> next = NULL;
   }
};
int main(){
   Node *head=new Node(10);
   Node *head2=new Node(20);
   Node *head3=new Node(30);
   cout<<head -> data<<" ";
   cout<<head2 -> data<<" ";
   cout<<head3 -> data<<endl;
  return 0;
}