#include<iostream>
using namespace std;
int main()
{
    int n=1234;
    int reverse=0;
    while(n>0){
    int lastdigit=n%10;
    reverse=reverse*10+lastdigit;
    n=n/10;
}
cout<<reverse<<endl;
}