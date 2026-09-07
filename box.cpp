#include <iostream>
using namespace std;

class Box
{
 float length,width,height;
 
public:
 Box()
 {
  length=1;
  width=1;
  height=1;
 }
 Box(float l,float w,float h)
 {
  length=l;
  width=w;
  height=h;
 }
 Box(const Box &b)
 {
  length=b.length;
  width=b.width;
  height=b.height;
 }
 
 float volume()
 {
  return length * width * height;
 }
 
 void display()
 {
  cout<<"Length:"<<length<<endl;
  cout<<"Width:"<<width<<endl;
  cout<<"Height:"<<height<<endl;
  cout<<"Volume:"<<volume()<<endl;
 }
 
 ~Box()
 {
  cout<<"Destructor called.Object destroyed."<<endl;
 }
};

int main()
{
 Box b1;
 cout<<"Box 1(Default constructor):"<<endl;
 b1.display();
 
 Box b2(5,4,3);
 cout<<"\nBox 2(Parameterized constructor):"<<endl;
 b2.display();
 
 Box b3(b2);
 cout<<"\nBox 3(Copy constructor):"<<endl;
 b3.display();
 
 return 0;
}












