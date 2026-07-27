#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
if(a>b&&a>c)
cout<<"a is largest";
else if(b>c&&b>a)
cout<<"b is largest";
else
cout<<"c is largest";
}

