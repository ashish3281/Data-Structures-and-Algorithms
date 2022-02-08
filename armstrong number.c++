#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n=371;
    int originaln=n;
    int sum=0;
    while(n>0){
    int lastdigit=n%10;
    sum=sum+pow(lastdigit,3);
    n=n/10;
    }
    
    if(sum==originaln)
    {
        cout<<"It is armstrong number"<<endl;
    }
    else{
        cout<<"Not a armstrong number"<<endl;
    }cout<<sum<<endl;
    return 0;
}