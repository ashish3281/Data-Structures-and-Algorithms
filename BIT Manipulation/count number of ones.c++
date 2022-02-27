#include<iostream>
using namespace std;
int numberofOnes(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    cout<<numberofOnes(19)<<endl;
    return 0;
}