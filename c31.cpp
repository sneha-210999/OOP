
#include<iostream>
using namespace std;
class Counter
{
   int count;
   public:
       Counter():count(0)
       {}
       int getcount()
       {
           return count;
       }
       void operator++()
       {
            ++count;
       }
       void operator--()
       {
            --count;
       }
};
int main()
{
    Counter b1;
    int y=1,ch,c;
    do
    {
        cout<<"\n1.Entering\n2.Leaving\n3.Display count\n4.Exit\nEnter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:++b1;
                break;
            case 2:--b1;
                break;
            case 3:{
                    c=b1.getcount();
                    cout<<"\nTotal count is:"<<c;
                    break;
                   }
            case 4:break;
           
        }
    }while(ch<4);
 return 0;
}



