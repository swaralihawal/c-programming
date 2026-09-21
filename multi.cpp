#include<iostream>
using namespace std;

class Student 
{
 protected:
  int roll_no;
  string name;
  
 public:
  void getStudent()
  {
   cout<<"Enter roll no:";
   cin>>roll_no;
   cout<<"Enter name:";
   cin>>name;
  }
};

class StudentMarks:public Student
{
 protected:
  int marks;
  
 public:
  void getMarks()
  {
   cout<<"Enter marks:";
   cin>>marks;
  }
};

class StudentResult : public StudentMarks
{
public:
    void display()
    {
        cout << "\n--- Student Result ---" << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    StudentResult s;

    s.getStudent();
    s.getMarks();
    s.display();

    return 0;
}











