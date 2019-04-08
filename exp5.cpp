#include<iostream>
#include<string>
using namespace std;
class STUDENT
{
 int stdno;
 char name[20];
 float avg,mark1,mark2,mark3;
 public:
 STUDENT()
 {
   avg=0;
  }
 void getdata()
 {
  cout<<"\nEnter name";
  cin.get(name,20);
  getchar();
  cout<<"\nEnter Roll no";
  cin>>stdno;
  cout<<"\nEnter marks out of 100";
  cout<<"\nEnter mark of subject 1:";
  cin>>mark1;
  cout<<"\nEnter mark of subject 2:";
  cin>>mark2;
  cout<<"\nEnter mark of subject 3:";
  cin>>mark3; 
  getchar();
 }
 void calc()
 {
  if((mark1>mark2)&&(mark3>mark2))
  {
    avg=(mark1+mark3)/2;
  }
  else
   if((mark2>mark1)&&(mark3>mark1))
   {
    avg=(mark2+mark3)/2;
   }
  else
   if((mark2>mark3)&&(mark1>mark3))
   {
    avg=(mark2+mark1)/2;
   }
  else
   avg=(mark1+mark2)/2;
 }
 void display()
 {
  cout<<"\nname"<<name;
  cout<<"\nRoll no"<<stdno;
  cout<<"\nAverage of the best two="<<avg;
 }
};
int main()
{
 int n,i;
 STUDENT s[20];
 cout<<"Enter number of students";
 cin>>n;
 cout<<"\nEnter Student details";
 getchar();
 for(i=0;i<n;i++)
 {
   s[i].getdata();
   s[i].calc();
 }
 for(i=0;i<n;i++)
 {
  s[i].display();
 }
 return 0;
}
    
