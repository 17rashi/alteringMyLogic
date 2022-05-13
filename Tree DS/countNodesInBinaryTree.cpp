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

/*Naive Solution*/
/*
int countNodes(Node* root,int &count){
   if(root==NULL){
      return count;
   }
   int l=countNodes(root->left,count)+1;
   int r=countNodes(root->right,count)+1;
   return l+r;
}
*/

/* effeicient Solution*/
int countNodes(Node* root){
   int lh=0,rh=0;
   Node* curr=root;
   while(curr!=NULL){
      curr=curr->left;
      lh++;
   }
   curr=root;
   while(curr!=NULL){
      curr=curr->right;
      rh++;
   }
   if(lh=rh){
      return pow(2,lh)-1;
   }
   return 1+countNodes(root->left)+countNodes(root->right);

}

int main(){
   Node* root=NULL;
   root = buildTree(root);

   //Printing the node
   int count=0;
   cout<<"Traversing a tree "<<endl;
   cout<<countNodes(root);
  return 0;
}

//8 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1