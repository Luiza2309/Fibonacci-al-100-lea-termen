#include<iostream>
#include<iomanip>
using namespace std;

long double fibo(unsigned n)
{
    if(n==0 || n==1) return 1;
	long double a=1,b=1,c;
	for(unsigned i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
    return c;
}

int main()
{
    cout<<setprecision(100)<<fibo(100)<<'\n';
}
