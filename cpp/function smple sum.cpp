#include<iostream>
#include<conio.h>
using namespace std;
int sum(int a , int b){
	int sum = 0;
	for(int i = a; i<=b;i++ ){
		sum += i;
	}
	return sum;
}
int main(){
	int a,b;
	cout<<"Enter the 2 number ...";
	cin>>a>>b;
	cout<<"The sum of "<<a<<" and "<<b<<" = "<<sum(a,b);
	}
