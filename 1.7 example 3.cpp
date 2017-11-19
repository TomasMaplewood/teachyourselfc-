/*1.7 example 3*/
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

void f1(int a)
{
    cout<<"In f1 (int a) \n";
}

void f1(int a, int b)
{
    cout<<"In f1 (int a, int b) \n";
}

int main()
{

    f1(10);
    f1(10,20);
    return 0;
}
