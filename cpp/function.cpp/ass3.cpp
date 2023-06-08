/*Write a function that calculates and returns area of square. Function parameter is length of 
each side of square.*/
#include<iostream>
#include<conio.h>
using namespace std;
int area(int );
int main(){
    int num1,b;
    cout<<"Enter the number ...";
    cin>>num1;
 b = area(num1);
 cout<<"Area of square = "<<b;
 return 0;
}
int area(int a){
    int b;
    b=a*a;
    return b;
}
