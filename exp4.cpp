#include<iostream>
using namespace std;
class Employee
{
 int empno,basic,da,it,netsal,grosssal;
 char ename[100];
 public:
 void input()
 {
  cout<<"Enter the employee number:";
  cin>>empno;
  cout<<"Enter the employee name:";
  cin>>ename;
  cout<<"Enter the basic salary:";
  cin>>basic;
 }
 void compute()
 {
  da=0.52*basic;
  grosssal=(basic+da)*12;
  it=0.30*grosssal;
  netsal=grosssal-it;
  cout<<"\nNET SALARY:"<<netsal;
 }
void display()
 {
   cout<<"\nEmployee Number:"<<empno;
   cout<<"\nEmployee Name:"<<ename;
   cout<<"\nBasic Salary:"<<basic;
   cout<<"\nNet salary:"<<netsal;
 }
};
int main()
{
Employee emp[100];
int i,n;
cout<<"\nEnter the number of employees:";
cin>>n;
for(i=0;i<n;i++)
 {
  emp[i].input();
  emp[i].compute();
  emp[i].display();
 }
}

  
