#include<iostream>
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
int calheight(node* root){
    if(root==NULL){
        return 0;
    }
    return max(calheight(root->left),calheight(root->right))+1;
}
int caldiameter(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calheight(root->left);
    int rheight=calheight(root->right);
      int currdiameter=lheight+rheight+1;
      int ldiameter=caldiameter(root->left);
      int rdiameter=caldiameter(root->right);
    return max(currdiameter,max(ldiameter,rdiameter));
}

int main(){
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
root->right->right=new node(7);
cout<<caldiameter(root)<<endl;
return 0;
}