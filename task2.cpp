#include <iostream>
using namespace std;

float volumeOfPyramid(float length, float width, float height);


main()
{
 float length;
 float width;
 float height;
 string unit;
 float answer;
 float calculation;

 cout << "Enter length: ";
 cin >> length;
 cout << "Enter width: ";
 cin >> width;
 cout << "Enter height: ";
 cin >> height;
 cout << "Enter unit: ";
 cin >> unit;


 answer =  volumeOfPyramid(length, width, height);
 
  if(unit == "centimeters")
  { 
    calculation = answer * 1000000;
    cout << "Volume of pyramid in centimeters is " << calculation;
  }


  if(unit == "millimeters")
  {
    calculation = answer * 1000000000;
    cout << "Volume of pyramid in millimeters is " << calculation;
  }

  if(unit == "kilometers")
  {
    calculation = answer / 1000000000;
    cout << "Volume of pyramid in kilometers is " << calculation;
  }

}


float volumeOfPyramid(float length, float width, float height)
{
 float volumeCalculation;
 volumeCalculation = ((length * width * height) / 3);
 
 return volumeCalculation;

}

