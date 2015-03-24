#include <iostream>
using namespace std;
int main(){//Jorge Samir Godinez Lara 01/02/2015

int F,C;

cout <<"\nGive me the actual temperature in Farenheit and I'll convert to Celsius: "; //This is an output line, where I ask the user for Temperature

cin >>F; //This is the variable that I use to save Farenheit Temperature

C=5*(F - 32)/9; //This is the formula to convert Farenheit degrees to Celsius.

  if (C >= 100){ //Here I establish conditional, for do something in case the Celsius temperature is over and/or equal 100 degrees.

                cout<<"\nA temperature of: " <<F<< " degrees Farenheit is: " <<C<< " degrees Celsius "<<endl; // This is the output I gave to the user.
                cout<<"\nWater boil at this temperature"<<endl; //The output where I said the water boil at this temperature.
  }

                      else{
                            cout<<"\nA temperature of: " <<F<< " degrees Farenheit is: " <<C<< " degrees Celsius "<<endl; // This is the output I gave to the user.
                            cout<<"\nWater is liquid at this temperature"<<endl;//The output where I said the water  does not boil at this temperature.
                          }

return 0;
}
