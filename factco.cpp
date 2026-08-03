#include<iostream>
using namespace std;

class factorial
{
public:
 int n,i,fact=1;
 
 void input()
 {
  cout<<"Enter number:";
  cin>>n;
 } 
 
 void display()
 {
   for(i=1;i<=n;i++)
   {
    fact=fact*i;
   }
  cout<<"factorial="<<fact;
 }
};
int main()
{
 factorial obj;

 obj.input();
 obj.display();
 
 return 0;
}
