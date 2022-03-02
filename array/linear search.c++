#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n =5;
    int arr[5]={10,20,37,56,45};
    int key=37;
    cout<<linearsearch(arr,n,key)<<endl;
    return 0;
}