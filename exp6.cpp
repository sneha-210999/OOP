#include<iostream>
#include<string>
using namespace std;
class SHOP
{
 char product[50];
 float total,price;
 public:
 SHOP()
 {
  total=0;
 }
 int code;
 void getdata()
 {
  cout<<"\nEnter the code";
  cin>>code;
  getchar();
  cout<<"\nEnter name of the product";
  cin.get(product,20); 
  cout<<"\nEnter price";
  cin>>price;
 }
 void calc()
 {
  total+=price;
 }
 void display()
 {
  cout<<"\nnameof the product="<<product;
  cout<<"\nCode"<<code;
  cout<<"\nTotal price"<<total;
 }
};
int main()
{
 int i,n,c,op;
 SHOP s[10];
 cout<<"\nEnter number of items";
 cin>>n;
 for(i=0;i<n;i++)
  s[i].getdata();
 do
 { 
  cout<<"Enter option\n1.delete\n2.display";
  cin>>op;
  switch(op)
  {
  case 1:{
           cout<<"\nEnter code";
           cin>>c;
           for(i=0;i<n;i++)
            {
              if(c==s[i].code)
               {
                s[i]=s[i+1]; 
                break;
               }
             }
            n=n-1;
            break;
         }
  case 2:{
           for(i=0;i<n;i++)
           {
             s[i].calc();
             s[i].display();
           }
           break;
         }
   }
 cout<<"\nContinue..(1/0)";
 cin>>op;
 }while(op==1);
}  











 
 





