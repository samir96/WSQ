#include <iostream>
using namespace std;
int main(){
int n,i;
char answer,yes='y',no='n';

do{
 cout<<"\nGive a positive number please, and I'll give you it's factorial: ";
 cin>>n;
  while(n<0){
    do{
    cout<<"\nThe number that you provide it's not positive, try again: ";
    cin>>n;
  }while(n<=1);
}
  i=n;
  while(i>1){
    i=i-1;
    n=i*n;
  }
  if(n==0){
    n=1;
  }
  cout<<"\nThe factorial of your number is: " <<n<<endl;
  cout<<"\nDo you want to try another number, if the answer is yes, answer with y, if no, answer with n: ";
  cin>>answer;

}while(answer==yes);
  if(answer==no){
    cout<<"\nThanks, see you!"<<endl;
  }
}
