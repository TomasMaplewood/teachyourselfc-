/*1.7 example 2*/
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;
void date(char *date)
   {
      cout<<"date: "<<date<<endl;
   }
   void date(int month, int day, int year)
   {
      cout<<"date: "<< month<<'/'<<day<<'/'<<year<<endl;
   }

int main()
{
   date("8/23/2017");
   date(8,23,2017);


return 0;
}
