#include <iostream>
using namespace std;
main()
{
int bagSize;
int bag;
int area;
int costOfFertilizer;
int areaInSquarefeet;
cout<<"enter bag size in pounds: ";
cin>>bagSize;
cout<<"cost of bag: ";
cin>>bag;
cout<<"enter area covered by each bag in square feet: ";
cin>>area;
costOfFertilizer=bag/bagSize;
cout<<"cost of fertilizer per pound: "<<costOfFertilizer<<endl;;
areaInSquarefeet=bagSize*area;
cout<<"cost of fertilizing area per square feet: "<<areaInSquarefeet;
}


