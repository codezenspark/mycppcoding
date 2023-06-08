#include<iostream>
using namespace std;
struct entery{
    string name;
    int salary;
    int boins;
};
int main(){
    entery emply1;
    emply1.salary = 45000;
    emply1.name = "Ahmed khan";
    emply1.boins = 5000;

    cout<<"Name : "<<emply1.name<<endl;
    cout<<"salary : "<<emply1.salary<<endl;
    cout<<"boins : "<<emply1.boins<<endl;
    cout<<"salary + boins : "<<emply1.salary + emply1.boins<<endl;

    entery emp2;
    emp2.salary = 48000;
    emp2.name = "Ail khan";
    emp2.boins = 6000;

    cout<<"Name : "<<emp2.name<<endl;
    cout<<"salary : "<<emp2.salary<<endl;
    cout<<"boins : "<<emp2.boins<<endl;
    cout<<"salary + boins : "<<emply2.salary + emply2.boins<<endl;
  


    entery emp3;
    emp3.salary = 50000;
    emp3.name = " khan";
    emp3.boins = 7000;

    cout<<"Name : "<<emp3.name<<endl;
    cout<<"salary : "<<emp3.salary<<endl;
    cout<<"boins : "<<emp3.boins<<endl;
    cout<<"salary + boins : "<<emply3.salary + emply3.boins<<endl;
}