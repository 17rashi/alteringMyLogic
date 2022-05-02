#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
      int data;
      Node* left;
      Node* right;
   
   Node(int d){
      this->data=d;
      this->left=NULL;
      this->right=NULL;
   }
};

Node* buildTree(Node* root){

   int data;
   cin>>data;
   root= new Node(data); 

   if(data==-1){
      return NULL;
   }

   cout<<"Enter the data for left node : ";
   root -> left = buildTree(root->left);
   cout<<"Enter the data for right node : ";
   root -> right = buildTree(root->right);

   return root;
}

void levelOrderTraversal(Node* root){
   queue<Node*> q;
   q.push(root);

   while(!q.empty()){
      Node* temp= q.front();
      cout<<temp->data<<" ";
      q.pop();

      if(temp->left){
         q.push(temp->left);
      }
      if(temp->right){
         q.push(temp->right);
      }
   }
}

int main(){
   Node* root=NULL;
   root = buildTree(root);

   //Printing the node
   cout<<"Traversing a tree "<<endl;
   levelOrderTraversal(root);
  return 0;
}