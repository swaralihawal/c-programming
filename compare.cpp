#include<iostream>
using namespace std;

class compare
{
public:
 int a,b;
 
 void input()
 {
  cout<<"Enter first number:";
  cin>>a;
  
  cout<<"Enter second number:";
  cin>>b;
 } 
 void display()
 {
  if(a>b)
   cout<<"first number is greater";
  else if(b>a)
   cout<<"second number is greater";
  else
   cout<<"Both are equal";

 }
};
int main()
{
 compare obj;

 obj.input();
 obj.display();
 
 return 0;
}
