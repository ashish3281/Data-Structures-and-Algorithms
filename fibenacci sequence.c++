#include<iostream>
using namespace std;
void fib(int n)
{
    int t1=0;
    int t2=1;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        int next_term=t1+t2;
        t1=t2;
        t2=next_term;
    }
    return ;
}
int main()
{
int n=10;
fib(n);
return 0;
}