#include<iostream>
#include<conio.h>
using namespace std;
int sum(int a ,int b){ 
    int c = a*b;
          return c;
}
int main(){
    int x,y;
    cout<<"enyer the number..";
    cin>>x;
    cout<<"enter the number..";
    cin>>y;
     cout<<"The sum is "<< sum(x,y);
    return 0; 
}
