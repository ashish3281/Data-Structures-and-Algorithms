#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,0,7,2};
    int curr=0;
    for(int i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr +=arr[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}