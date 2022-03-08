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

node* searchinBST(node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    //data>key
    if(root->data>key){
        return searchinBST(root->left,key);
    }
    //data<key
    return searchinBST(root->right,key);
}
   
int main(){
    struct node*root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->left=new node(6);

if(searchinBST(root,5)==NULL){
    cout<<"key does not exit"<<endl;
}
else{
    cout<<"key exits"<<endl;
}
    return 0;
}
    