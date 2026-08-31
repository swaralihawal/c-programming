#include<iostream> 
using namespace std;

class SavingsAccounts
{
 int accNo;
 string name;
 float balance;
 
public:
 SavingsAccounts(int a,string n,float b)
 {
  accNo=a;
  name=n;
  balance=b;
 }
 
void deposit(float amount)
 {
  balance+=amount;
 }
void withdraw(float amount)
{
 if(amount<=balance)                                                    
  balance-=amount;
 else 
  cout<<"Insufficient Balance\n";
}
 void interest(float rate)
 {
  balance+=balance*rate/100;
 }
 
 void display()
 {
  cout<<"\n---Savings Account---\n";
  cout<<"Account No:"<<accNo<<endl;
  cout<<"Name:"<<name<<endl;
  cout<<"Balance:"<<balance<<endl;
 }
};

class CheckingAccount
{
 int accNo;
string name;
float balance;
float fee;

public:
 CheckingAccount(int a,string n,float b)
 {
  accNo=a;
  name=n;
  balance=b;
  fee=20;
 }
  void deposit(float amount)
  {
   balance+=amount;
  }
  void withdraw(float amount)
  {
   if(amount+fee<=balance)
    balance-=amount+fee;
   else
    cout<<"Insufficient Balance\n";
  }
   
  void display()
  {
   cout<<"\n---Checking Account---\n";
  cout<<"Account No:"<<accNo<<endl;
  cout<<"Name:"<<name<<endl;
  cout<<"Transaction fee:"<<fee<<endl;
  cout<<"Balance:"<<balance<<endl;
  }
};

int main()
{
 SavingsAccounts s(101,"Swarali",1000);
 CheckingAccount c(102,"Swarali",20000);
  
 s.deposit(2000);
 s.withdraw(1000);
 s.interest(6);
 
 c.deposit(3000);
 c.withdraw(2000);
 
 s.display();
 c.display();
 
  return 0;
}
