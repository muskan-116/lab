#include <iostream>
using namespace std;
main()
{
float vegetablePrice;
float fruitPrice;
int totalKilogramsOfVegetable;
int totalKilogramsOfFruit;
float vegetableCost;
float fruitCost;
float total;
cout<<"enter vegetable price in kilograms: ";
cin>>vegetablePrice;
cout<<"enter fruit price in kilograms: ";
cin>>fruitPrice;
cout<<"enter totalKilogramsOfVegetable : ";
cin>>totalKilogramsOfVegetable;
cout<<"enter totalKilogramsOfFruits : ";
cin>>totalKilogramsOfFruit;
vegetableCost=totalKilogramsOfVegetable*vegetablePrice;

fruitCost=fruitPrice*totalKilogramsOfFruit;

total=(fruitCost+vegetableCost)/1.94;
cout<<"total : "<<total;

}