#include <iostream>
using namespace std;

float firmProject(float  hours, float days, float workers);


main()
{
  float hours;
  float days;
  float workers;
  int answer;
 

 cout << "Enter hours: ";
 cin >> hours;
 cout << "Enter number of days: ";
 cin >> days;
 cout << "Enter number of workers: ";
 cin >> workers;

 answer = firmProject( hours, days, workers); 

 if(answer > hours)
 {
   cout << " Yes! " << answer << " hours left";
 }
 
 if(answer < hours)
 { int result;
   result = -answer;
   cout << " Not enough time! " << result << "hours needed";
 }

}



float firmProject(float  hours, float days, float workers)
{
  float notWorking;
  float workingDays;
  float totalWorkers;
  float completeTime;
  int timeLeft;

  notWorking = (days*10) / 100;
  workingDays = days - notWorking;
  totalWorkers = workers * 10;
  completeTime = totalWorkers * workingDays;
  timeLeft = completeTime - hours;

  return timeLeft;


}