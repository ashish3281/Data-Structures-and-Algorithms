#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
node* constBST(int preorder[],int* preorderidx,int key,int min,int max,int n){
if(*preorderidx>=n){
    return NULL;
}
    node* root=NULL;
    if(key>min&&key<max){
      root=new node(key);
      *preorderidx=*preorderidx+1;
      if(*preorderidx <n){
          root->left=constBST(preorder,preorderidx,preorder[*preorderidx],min ,key,n);
      }
      if(*preorderidx<n){
          root->right=constBST(preorder,preorderidx,preorder[*preorderidx],key,max,n);
      }
    }
    return root;
}
   void printpreorder(node* root){
       if(root==NULL){
           return ;
       }
       cout<<root->data<<endl;
       printpreorder(root->left);
       printpreorder(root->right);
   }
int main(){
    
   int preorder[]={10,2,1,13,11};
   int n=5;
   int preorderidx=0;
   node* root=constBST(preorder,&preorderidx,preorder[0],INT_MIN,INT_MAX,n);
   printpreorder(root);
cout<<endl;
    return 0;
}
    