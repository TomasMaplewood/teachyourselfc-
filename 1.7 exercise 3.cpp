/*1.7 exercise 3*/
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<math.h>

using namespace std;

int min(int a,int b)
{
   if(a>b)
   {
      return a;
   }
   else return b;
}

char min(char a,char b)
{
   if(a>b)
   {
      return a;
   }
   else return b;
}

double min(double a,double b)
{
   if(a>b)
   {
      return a;
   }
   else return b;
}


int main()
{
cout<<min(1000,200)<<endl;
cout<<min("A","B")<<endl;
cout<<min(10.33,2.33)<<endl;
return 0;
}
