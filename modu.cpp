#include <iostream>
using namespace std;
main()
{
int input;
int sum;
int div;
int rem1;
int rem2;
int rem3;
int rem4;
int rem5;
cout<<"enter four digit number: ";
cin>>input;
div=input/1000;
rem1=input%1000;
rem2=rem1/100;
rem3=rem1%100;
rem4=rem3/10;
rem5=rem3%10;
sum=div+rem2+rem4+rem5;
cout<<"sum : "<<sum;
}
