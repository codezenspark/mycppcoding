#include<iostream>
using namespace std;
void change(int *num1 , int *num2);
int main()
{
	int num1 = 23,num2 = 12;
	cout<<"num1 = "<<num1<<": num2 = num2 ";
	change(&num1,&num2);
	cout<<"After change number num1 = "<<num1 <<": num2 = "<<num1;
	return 0;
	
}
void change(int *num1 , int *num2){
	int *a;
	a=*num1;
	*num1=*num2;
	*num2=a;
	return ;
}
