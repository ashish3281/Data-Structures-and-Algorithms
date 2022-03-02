#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
     while(s<e){
         int mid=(s+e)/2;
         if(arr[mid]==key){
             return mid;

         }
         else if(arr[mid]>key){
             e=mid+1;
         }
         else{
             s=mid+1;
         }
     }
     return -1;

     
}
int main(){
    int n =5;
    int arr[5]={8,10,12,16,19};
    int key=12;
    cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}