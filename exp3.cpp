#include<iostream>
using namespace std;
class Employee
{
 int empcode;
 char empname[100];
 public:
 void getdata()
 {
  cout<<"\nEnter the employee number:";
  cin>>empcode;
  cout<<"Enter the employee name:";
  cin>>empname;
 }
void display()
 {
  cout<<"\nEMPLOYEE CODE:"<<empcode;
  cout<<"\nEMPLOYEE NAME:"<<empname;
  
 }
};
int main()
{
 Employee emp[50];
 int i;
 for(i=0;i<6;++i)
 {
 emp[i].getdata();
 emp[i].display();
 }
}

