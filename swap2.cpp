#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"After swapping"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
return 0;
}
