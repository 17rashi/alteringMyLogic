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
   cout<<"Traversing a tree "<<endl;
   levelOrderTraversal(root);
  return 0;
}

//8 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1