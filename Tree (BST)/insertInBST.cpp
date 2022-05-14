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

Node* insertInBST(Node* root,Node* val){
   if(root==NULL){
      return val;
   }
   if(root->data>val->data){
      root->left=insertInBST(root->left,val);
   }
   else{
      root->right=insertInBST(root->right,val);
   }
   return root;
}

void levelOrderTraversal(Node* root){
   queue<Node*> q;
   q.push(root);
   q.push(NULL);
   while(!q.empty()){
      Node* temp= q.front();
      q.pop();

      if(temp==NULL){
         cout<<"\n";
         if(!q.empty()){
            q.push(NULL);
         } 
      }
      else{
         cout<<temp->data<<" ";
         if(temp->left!=NULL){
            q.push(temp->left);
         }
         if(temp->right!=NULL){
            q.push(temp->right);
         }
      }

   }
}

int main(){
   Node* root=NULL;
   root = buildTree(root);

   //Printing the node
   int v;
   cin>>v;
   Node* val=new Node(v);
   insertInBST(root,val);
   levelOrderTraversal(root);
  return 0;
}

//15 5 3 -1 -1 -1 20 18 16 -1 -1 -1 80 -1 -1 