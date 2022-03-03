#include<iostream>
using namespace std;
int factorial(int n)
{
int factorial=1;
for (int i=2;i<=n;i++)
{
factorial=factorial*i;

}
return factorial;
}
int main()
{
int n=4;
cout<<factorial(n)<<endl;
return 0;
}