/*1.7 exercise 1*/
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<math.h>

using namespace std;

int sroot(int a)
{
   return sqrt(a);
}

long int sroot(long int a)
{
   return sqrt(a);
}

double sroot(double a)
{
   return sqrt(a);
}


int main()
{
cout<<sroot(100)<<endl;
cout<<sroot(10035465)<<endl;
cout<<sroot(100.365)<<endl;
return 0;
}
