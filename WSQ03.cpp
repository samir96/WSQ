#include <iostream>
using namespace std;
int main(){

  int n1,n2,suma,dif,divi,multi,modulo;

  cout <<"\nGive a number: ";

  cin >>n1;

  cout<<"\nGive another number: ";

  cin>>n2;

  suma=n1+n2;

  dif=n1-n2;

  divi=n1/n2;

  multi=n1*n2;

  modulo=n1%n2;

  cout<<"\nThe sum of "  <<n1<<  " + " <<n2<< " = " <<suma<< endl;

  cout<<"\nThe difference of " <<n1<< " - " <<n2<< " = " <<dif<< endl;

  cout<<"\nThe division of " <<n1<< " / " <<n2<< " = " <<divi<< endl;

  cout<<"\nThe multiplication of " <<n1<< " * " <<n2<< " = " <<multi<< endl;

  cout<<"\nThe module of " <<n1<< " MOD " <<n2<< " = " <<modulo<< endl;


  return 0;
}
