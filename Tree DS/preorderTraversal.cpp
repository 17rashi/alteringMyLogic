#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node* left;
   Node* right;

   Node(int x){
      this->data=x;
      this->left=NULL;
      this->right=NULL;
   }
};

Node* buildTree(Node* root){
   int data;
   cin>>data;

   root = new Node(data);

   if(data==-1){
      return NULL;
   }
      
   cout<<"Enter data for left node : ";
   root->left=buildTree(root->left);
   cout<<"Enter data for right node : ";
   root->right=buildTree(root->right);

   return root;
}

void preorder(Node* root){
   if(root!=NULL){
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);
   }
}

int main(){
   Node* root=NULL;
   cout<<"Enter the data for root : ";
   root=buildTree(root);

   cout<<"Preorder Traversal : "<<endl;
   preorder(root);
  return 0;
}