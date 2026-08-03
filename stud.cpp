#include<iostream>
using namespace std;

class student 
{
public:
 string name;
 int marks;
 
 void input()
 {
 cout<<"Enter student name:";
 cin>>name;
 
 cout<<"Enter marks:";
 cin>>marks;
 } 
 
 void display()
 {
 cout<<"\nstudent name:"<<name<<endl;
 cout<<"marks:"<<marks<<endl;
 }
};
int main()
{
 student stud;

 stud.input();
 stud.display();
 
 return 0;
}
