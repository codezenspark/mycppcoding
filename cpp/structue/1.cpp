#include<iostream>
using namespace std;

struct result    //structure declaretion
{
    string name;
    int rollNo;
    float marks;
    char gread;
};
int main(){
     result stud1;
     stud1.name  = "Daud shah";
     stud1.rollNo = 456;
     stud1.marks = 540;
     stud1.gread = 'A';
     cout<<"Name : "<<stud1.name<<endl;
     cout<<"Roll No : "<<stud1.rollNo<<endl;
     cout<<"Marks : "<<stud1.marks<<endl;
     cout<<"Gread : "<<stud1.gread<<endl;
     
       result stud2;
     stud2.name  = "M Ail";
     stud2.rollNo = 478;
     stud2.marks = 380;
     stud2.gread = 'B';
     cout<<"Name : "<<stud2.name<<endl;
     cout<<"Roll No : "<<stud2.rollNo<<endl;
     cout<<"Marks : "<<stud2.marks<<endl;
     cout<<"Gread : "<<stud2.gread<<endl;

       result stud3;
     stud3.name  = "Awis khan";
     stud3.rollNo = 490;
     stud3.marks = 310;
     stud3.gread = 'C';
     cout<<"Name : "<<stud3.name<<endl;
     cout<<"Roll No : "<<stud3.rollNo<<endl;
     cout<<"Marks : "<<stud3.marks<<endl;
     cout<<"Gread : "<<stud3.gread<<endl;
}