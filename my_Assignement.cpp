/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include<iostream>
#include<string>
using namespace std;

//global variable declaration
int uspeed, dspeed;

class car
{
public:
  int release_year;
  string cus_name;
  int car_speed;

  // input the detailes of car
  void set_data ()
  {
    cout << "Enter the release year of the car: ";
    cin >> release_year;
    cout << "Enter the customer name: ";
    cin >> cus_name;
    cout << "Enter the speed of the car: ";
    cin >> car_speed;
  }

  // display the Detailes about the car
  void get_data ()
  {
    cout << "---------------------------------------------------\n";
    cout << "Car Detailes:->    ";
    cout << "release_year:" << release_year << "\n" << "cus_name:" << cus_name
      << "\n" << "initial car_speed:" << car_speed << endl;
  }

  // accelerating the car speed when the accelerate fuction get call
  int accelerate (int uspeed)
  {
    uspeed += 10;
    return uspeed;
  }

  // deaccelerating the car speed when the brake fuction get call
  int brake (int dspeed)
  {
    if (dspeed > 0)
      {
	dspeed -= 10;
      }
    return dspeed;
  }

};

int
main ()
{
  car c1;
  c1.set_data ();
  c1.get_data ();
  uspeed = c1.car_speed;
  //loop for accelarting the speed of car
  for (int j = 0; j < 5; j++)
  {
    uspeed = c1.accelerate (uspeed);
    dspeed = uspeed;
  }
  cout << "After acceleration, car current Speed is: " << uspeed << endl;
  
  //(brake)loop for deaccelarting the speed of car
  for (int j = 0; j < 5; j++)
  {
    dspeed = c1.brake (dspeed);
  }
  cout << "After deaccelartion, car current Speed is: " << dspeed << endl;
}
