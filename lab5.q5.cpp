//include library
#include<iostream>
using namespace std;
//mention the main function
int main()
{
  //declare the variables
  int a;
  //ask for input
  cout <<"enter a number : ";
  cin>>a;
  //conditions
  if (a%2==0) {
  //print the results
  cout<<a<<" is an even number."<<endl;
  }
  else{
  cout<<a<<" is an odd number."<<endl;
  }
  return 0;
}
