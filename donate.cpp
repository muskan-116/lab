#include <iostream>
using namespace std;
main()
{
string movieName;
int adultTicketPrice;
int childTicketPrice;
int adultTicketSold;
int childTicketSold;
int percentageToDonate;
int total;
float donate;
cout<<"movie name: ";
cin>>movieName;
cout<<"enter adult ticket price: ";
cin>>adultTicketPrice;
cout<<"enter child ticket price: ";
cin>>childTicketPrice;
cout<<"enter adult ticket sold: ";
cin>>adultTicketSold;
cout<<"enter child ticket sold: ";
cin>>childTicketSold;
cout<<"percentageTo Donate: ";
cin>>percentageToDonate;
total=(adultTicketSold*adultTicketPrice)+(childTicketPrice*childTicketSold);
cout<<"total amount generated: "<<total<<endl;
donate=(percentageToDonate*total)/100;
percentageToDonate=total-donate;
cout<<"percentageToDonate: "<<percentageToDonate;
}