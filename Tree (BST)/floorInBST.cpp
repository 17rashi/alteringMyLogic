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

int floorInBST(Node* root, int val,int &ans){
   if(root==NULL){
      return ans;
   }
   if(root->data==val){
      return root->data;
   }
   if(root->data>val){
      return floorInBST(root->left,val,ans);
   }
   else{
      ans=root->data;
      return floorInBST(root->right,val,ans);
   }
   return ans;
}

int main(){
   Node* root=NULL;
   root = buildTree(root);

   //Printing the node
   int v;
   cin>>v;
   int c=0;
   cout<<floorInBST(root,v,c);
  return 0;
}

//15 5 3 -1 -1 -1 20 18 16 -1 -1 -1 80 -1 -1 