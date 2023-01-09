#include <iostream>
using namespace std;
float taxcalculator(char type,float price);
main()
{
 char type;
 float price;
 float taxAmount;
 float finalprice;
 cout << "Enter vehicle price : ";
 cin >> price;
 cout << "Enter vehicle  code : ";
 cin >> type;


 taxAmount = taxcalculator( type, price);
 finalprice = price + taxAmount;
 cout<<"final price of vehicle "<< type <<"  is "<< finalprice ;



}






float taxcalculator(char type,float price)
{
 float taxAmount;

 if(type == 'M')
{
 taxAmount = (price * (6.0/100));
 
}

 if(type == 'E')
{
 taxAmount = (price * (8.0/100));

}
if(type == 'S')
{
 taxAmount = (price * (10.0/100));

}
 if(type == 'V')
{
 taxAmount = (price * (12.0/100));

}
 if(type == 'T')
{
 taxAmount = (price * (15.0/100));
 
}

return taxAmount;
}