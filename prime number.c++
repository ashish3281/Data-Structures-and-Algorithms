#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n=17;
    bool flag=0;
    for(int i=2;i<sqrt(n);i++)
    {if(n%i==0){
        cout<<"not a prime number"<<endl;
        flag=1;
        break;
    }
    }
    if(flag==0){
        cout<<"Prime number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;}
        return 0;
}

