#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insert_at_tail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currptr =head;
    node* nextptr;
    int count=0;
    while(currptr !=NULL &&count<k){
        nextptr=currptr ->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr !=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
       cout<< temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
int main()
{
    node*head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_tail(head,6);
    display(head);
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
    return 0;
}