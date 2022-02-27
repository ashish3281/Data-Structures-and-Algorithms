#include<iostream>
using namespace std;
int set_bit(int n,int pos){
    return(n|(1<<pos));
}
int main(){
    cout<<set_bit(5,1)<<endl;
    return 0;
}