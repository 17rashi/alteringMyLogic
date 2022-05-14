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

void searchInBST(Node* root,int val){
   if(root==NULL){
      cout<<"Not present"<<endl;
      return ;
   }
   if(root->data==val){
      cout<<val<<" is present"<<endl;
      return ;
   }
   if(root->data>val){
      searchInBST(root->left,val);
   }
   else{
      searchInBST(root->right,val);
   }
}

int main(){
   Node* root=NULL;
   root = buildTree(root);

   //Printing the node
   int val;
   cin>>val;
   searchInBST(root,val);
  return 0;
}

//15 5 3 -1 -1 -1 20 18 16 -1 -1 -1 80 -1 -1 