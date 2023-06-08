#include<iostream>
using namespace std;
struct result{
	int Rollno;
	string name;
	char grade;
	int marks;
	float per;
	
};
int main()
{
 result s1;
 cout<<"Enter your Name...."<<endl;
  cin>>s1.name;
  cout<<"Enter your Roll No...."<<endl;
  cin>>s1.Rollno;
  cout<<"Enter your marks...."<<endl;
  cin>>s1.marks;
  cout<<"Enter your percentage...."<<endl;
  cin>>s1.per;
  cout<<"Enter your grade...."<<endl;
  cin>>s1.grade;
  
  cout<<" your Name is "<<s1.name<<endl;
  cout<<" your Roll No is "<<s1.Rollno<<endl;
  cout<<" your Marks is "<<s1.marks<<endl;
  cout<<" your Percentage is "<<s1.per<<endl;
  cout<<" your Grade is "<<s1.grade<<endl;
  
  
  result s2;
 cout<<"Enter your Name...."<<endl;
  cin>>s2.name;
  cout<<"Enter your Roll No...."<<endl;
  cin>>s2.Rollno;
  cout<<"Enter your marks...."<<endl;
  cin>>s2.marks;
  cout<<"Enter your percentage...."<<endl;
  cin>>s2.per;
  cout<<"Enter your grade...."<<endl;
  cin>>s2.grade;
  
  cout<<" your Name is "<<s2.name<<endl;
  cout<<" your Roll No is "<<s2.Rollno<<endl;
  cout<<" your Marks is "<<s2.marks<<endl;
  cout<<" your Percentage is "<<s2.per<<endl;
  cout<<" your Grade is "<<s2.grade<<endl;
  
return 0;
}
