#include<iostream>
using namespace std;
int update_bit(int n,int pos,int value){
    int mask=~(1<<pos);
    n=n&mask;
    return(n|(value<<pos));
}
int main(){
    cout<<update_bit(5,1,1)<<endl;
    return 0;
}