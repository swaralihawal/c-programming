#include<iostream>
using namespace std;

class Time
{
 int hh,mm,ss;
 
public:
 void getData()
 {
  cout<<"Enter hours:";
  cin>>hh;
  cout<<"Enter minutes: ";
  cin>>mm;
  cout<<"Enter seconds:";
  cin>>ss;
 }

 void add(Time t)
 {
  int h,m,s;
  s=ss+t.ss;
  m=mm+t.mm;
  h=hh+t.hh;
  
  if(s>=60)
  {
   s=s-60;
   m++;
  }
   if(m>=60)
  {
   m=m-60;
  hh++;
  } 
  
  cout<<"Addition="<<h<<":"<<m<<":"<<s;
 }
};

int main()
{
 Time t1,t2;
 
 cout<<"Enter first Time:\n";
 t1.getData();
 
 cout<<"Enter second Time:\n";
 t2.getData();
 
 t1.add(t2);
 
 return 0;
}
