//include library
#include<iostream>
using namespace std;
//mention the main function
int main() 
{
  //declaring the variables
  float a,b,c;
  //ask the user for inputs
  cout<<"enter three numbers :";
  cin>>a>>b>>c;
  //conditions
  if ((a>b)&& (a>c))
{
  //print the results
  cout<<a<< " is the greater number"<<endl;
  }
  else if ((b>c) && (b>a)){
  cout<<b<< " is the maximum number"<<endl;
  }
  else{
  cout<<c<< " is the maximum number."<<endl;
  }
  return 0;
}
