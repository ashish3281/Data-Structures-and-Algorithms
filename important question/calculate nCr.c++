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
int n=5;
int r=2;
int ans=factorial(n)/(factorial(n-r)*factorial(r));

cout<<ans<<endl;
return 0;
}