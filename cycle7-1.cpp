#include<iostream>
using namespace std;
class Swap
{
int x,y;
public:
void swap_value(int x,int y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
 cout<<x<<"\t"<<y;
}
void swap_reference(int &x,int &y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
 cout<<x<<"\t"<<y;
}
void swap_address(int *x,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
 cout<<*x<<"\t"<<*y;
}
};
int main()
{
 Swap S;
 int a,b,choice;
 cout<<"Enter the two values:";
 cin>>a>>b;
 cout<<a<<"\t"<<b;
 cout<<"\nMethods to swap two values:\n";
 cout<<"1.call by value\n2.call by reference\n3.call by address\n";
 cout<<"enter the choice:";
 cin>>choice;
 switch(choice)
 {
  case 1:
  {
   S.swap_value(a,b);
   break;
  }
  case 2:
  {
   S.swap_reference(a,b);
   break;
  }
   case 3:
   {
    S.swap_address(&a,&b);
    break;
   }
   default:
     cout<<"Wrong choice";
 }
return 0;
}
   
