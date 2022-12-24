#include <iostream>
using namespace std;
main()
{
string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
float percentage;
int total;
cout<<"enter name: ";
cin>>name;
cout<<"enter subject1 mark : ";
cin>>subject1;
cout<<"enter subject2 mark : ";
cin>>subject2;
cout<<"enter subject3 mark : ";
cin>>subject3;
cout<<"enter subject4 mark : ";
cin>>subject4;
cout<<"enter subject5 mark : ";
cin>>subject5;
total=subject1+subject2+subject3+subject4+subject5;
percentage=(total*100)/500;
cout<<"percentage: "<<percentage;
}
