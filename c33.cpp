#include<iostream>
using namespace std;
class bill
{
char name[80];
int units_consumed;
float charges;
public:
void read()
{
  cout<<"enter the name:";
  cin>>name;
  cout<<"enter the units consumed:";
  cin>>units_consumed;
}
bill()
{
units_consumed=0;
charges=50;
}
void calc_charges()
{
if(units_consumed<=100)
  charges=units_consumed*60;
else if((units_consumed>100)&&(units_consumed<=200))
  charges=units_consumed*80;
else if(units_consumed>300)
  charges=units_consumed*90;

if(charges>300)
  charges=0.15*charges+charges;
cout<<"\nthe Total charges applied:"<<charges;
}
void display()
 {
  cout<<"\nNAME:"<<name;
  cout<<"\nUnits Consumed:"<<units_consumed;
  calc_charges();
 }
};
int main()
{
  bill B;
  B.read();
  B.display();
}


  
