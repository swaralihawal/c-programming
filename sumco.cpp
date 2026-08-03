#include<iostream>
using namespace std;

class sum 
{
public:
 int a,b;
 
 void input()
 {
 cout<<"Enter first no:";
 cin>>a;
 
 cout<<"Enter second no:";
 cin>>b;
 } 
 
 void display()
 {
 cout<<"sum="<<a+b;
 }
};
int main()
{
 sum obj;

 obj.input();
 obj.display();
 
 return 0;
}
