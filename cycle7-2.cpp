




	
	
	

#include<iostream>
using namespace std;
class Minmax
{
 public:
 int i,minm,maxm;
 void min(int a[],int n)
 {
  minm=a[0];
  for(i=0;i<n;i++)
  { if(a[i]<minm)
    minm=a[i];
  }
 cout<<"\nMinimun number:"<<minm;
 }
 void max(int a[],int n)
 {
  maxm=a[0];
  for(i=0;i<n;i++)
  { if(a[i]>maxm)
    maxm=a[i];
  }
 cout<<"\nMaximum number:"<<maxm;
 }
};
int main()
{
 int n,a[50],c,i;
 Minmax* mm;
 cout<<"Enter no of elements:";
 cin>>n;
 cout<<"\n1.Find the minimum element 2.Find the maximum element";
 cin>>c;
 cout<<"\nEnter the elements in array:";
 for(i=0;i<n;i++)
 {cin>>a[i];}
 for(i=0;i<n;i++)
 {cout<<a[i]<<"\t";}
 if(c==1)
 {mm=new Minmax;
 mm->min(a,n);}
 else
 {mm=new Minmax;
  mm->max(a,n);
 }
return 0;
}














 















 


