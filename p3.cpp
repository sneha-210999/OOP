#include<iostream>
using namespace std;
class Rev
{
    public:
        void reverse(int num)
        {
             int r,temp,rev;
             temp=num;
             r=0;
             while(num!=0)
             {
               rev=num%10;
               r=(r*10)+rev;
               num=num/10;
             }
             cout<<temp;
             cout<<"\n"<<r;          
             if(r==temp)
             {
                  cout<<"\nit is a Palindrome";
             }
             else
             {
                  cout<<"\nit is not a palindrome";
             }
         }
};
int main()
{
     int b;
     Rev r1;
     cout<<"\nEnter the number:";
     cin>>b;
     r1.reverse(b);
     return 0;
}


 
   
   
