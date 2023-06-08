#include<iostream>
#include<conio.h>
using namespace std;
int mul(int a,int b)
{
    int sum = 0;
    sum = a*b;
    return sum;
} 
int main (){
    int x,y,sum=0;
    cout<<"Enter the x ..."<<endl;
    cin>>x;
    cout<<"Enter the y...."<<endl;
    cin>>y;
    sum = mul(x,y);
    cout<<"sum = "<<sum;
    return 0;

}
