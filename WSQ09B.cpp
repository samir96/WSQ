#include <iostream>
using namespace std;
factorial(int n){
  if(n>1){
    return n* factorial(n-1);
          }
    if(n==0){
      return 1;
    }
  }
int main(){
  int n;
  char answer,yes='1',no='2';
  do{
  cout<<"\nGive a number and I'll give you it's factorial: "  ;
  cin>>n;
  cout<<"\nThe factorial of your number is: "<<factorial(n)<<endl;
  cout<<"\nDo you want to try another number?\n \n1=yes\n\n2=no: ";
  cin>>answer;
}while(answer==yes);
  if(answer==no){
    cout<<"\nThanks";
  }
return 0;
}
