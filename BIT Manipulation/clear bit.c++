#include<iostream>
using namespace std;
int clear_bit(int n,int pos){
    int mask=~(1<<pos);
    return(n&mask);
}
int main(){
    cout<<clear_bit(5,2)<<endl;
    return 0;
}