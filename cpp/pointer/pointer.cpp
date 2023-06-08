#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	a=23,b=45;
	c=a+b;
	int *p=&c;
	cout<<p;
}
