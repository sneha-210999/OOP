#include<iostream>
using namespace std;
class check
{
  int num;
  public:
  void check1(int n)
  {
   if(n%2==0)
    {
     cout<<"Number is even\n";
    }
   else
     cout<<"Number is odd\n";
  }
};
int main()
{
check c;
int n;
cout<<"enter a value:";
cin>>n;
c.check1(n);
}


   
