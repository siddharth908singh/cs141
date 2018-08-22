//include library
#include<iostream>
using namespace std;
//mention the main function
int main() 
{
//declaring the variables
float P,R,T,S;
//assigning values to the variables
cout << " the principle amount is ";
cin >>P;
cout << "the rate of interest is ";
cin>>R;
cout << "the time period is ";
cin>> T;
//calculations
S = P*R*T/100;
//PRINT THE RESULTS
cout << "the simple interest for the given amount is "<<S<<endl;
return 0;
}
