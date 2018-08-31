//include library
#include<iostream>
using namespace std;
//mention the main variable
int main()
{
  //declare the variables
  int a;
  //ask for input
  cout<<"enter a number : ";
  cin>>a;
  //condition
  if ((a%5==0) && (a%11==0)){
  //print the result
  cout<<a<< " is divisible by 5 and 11 ."<<endl;
  }
  else {
  cout<<a<< " is not divisible by 5 and 11 ."<<endl;
  }
  return 0;
}
