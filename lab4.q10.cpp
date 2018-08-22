//include library
#include<iostream>
using namespace std;
#include<math.h>

//mention main function
int main() 
{
//declare the variables
float P,T,R,C;
//assigning values to the variables
cout << "the principle amount deposited is ";
cin >>P;
cout << "the rate of interest is ";
cin >>R;
cout << "the time period in years is ";
cin >>T;
//calculations
C = P*pow((1+(R/100)),T);
//printing the results
cout << " the compound interest for the given amount is "<<C<<endl;
return 0;
}
