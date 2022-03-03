#include<iostream>
using namespace std;
void towerOfHanoi(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,src,helper,dest);
    cout<<"move from"<<src<<"to"<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}
int main(){
    towerOfHanoi(3,'A','C','B');
    return 0;
}