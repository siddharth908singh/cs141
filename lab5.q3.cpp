//include library
#include<iostream>
using namespace std;
//mention the main function
int main ()
{
  //declare the variables
  float a;
  //ask for inputs
  cout<< "enter a number";
  cin>>a;
  //conditions
  if (a>0){
  //print the result
  cout<<a<<" is a positive number "<<endl;
  }
  else if (a<0){
  cout<<a<<" is a negative number."<<endl;
  }
  else {
  cout<<a<<" is zero."<<endl;
  }
  return 0;
  } 
  
