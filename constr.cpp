#include<iostream>
using namespace std;

class Employee
{
 int id;
 string name;
 float salary;
 
public:
 Employee(): id(0),name("Unknown"),salary(0)
{}
 Employee(int i,string n,float s)
  :id(i),name(n),salary(s){}
  
 Employee(Employee &e)
  :id(e.id),name(e.name),salary(e.salary){}
  
 void display()
 {
  cout<<"Employee ID:"<<id<<endl;
  cout<<"Name:"<<name<<endl;
  cout<<"Salary:"<<salary<<endl;
  cout<<"--------"<<endl;
  }
 };
 
int main()
{
 Employee e1;
 cout<<"Default Constructor:"<<endl;
 e1.display();
 
 Employee e2(100,"Swarali",100000);
 cout<<"Parameterized Constructor:"<<endl;
 e2.display();

 Employee e3(e2);
 cout<<"Copy Constructor:"<<endl;
 e3.display();
}
