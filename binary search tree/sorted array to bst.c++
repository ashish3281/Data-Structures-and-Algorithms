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
node * sortedarraytoBST(int arr[],int start, int end){
     if(start>end){
         return NULL;
     }
     int mid=(start+mid)/2;
     node*root=new node(arr[mid]);
     root->left=sortedarraytoBST(arr,start,mid-1);
     root->right=sortedarraytoBST(arr,mid+1,end);
    return root;
}
void preorderprint(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderprint(root->left);
    preorderprint(root->right);
}
int main(){
   
int arr[]={10,20,30,40,50};
node*root=sortedarraytoBST(arr,0,4);
preorderprint(root);
cout<<endl;
    return 0;
}