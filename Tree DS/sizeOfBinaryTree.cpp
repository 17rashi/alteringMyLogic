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

int countNodes(Node* root){
   if(root==NULL){
      return 0;
   }
   else{
      return 1+countNodes(root->left)+countNodes(root->right);
   }
}

int main(){
   Node* root=NULL;
   root = buildTree(root);

   //Printing the node
   cout<<"Traversing a tree "<<endl;
   int count=0;
   int m=countNodes(root);
   cout<<m<<endl;
  return 0;
}

//8 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1