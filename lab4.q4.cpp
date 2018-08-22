//include library
#include<iostream>
using namespace std;
//mention main function
int main() 
{
//declaring variables
int d,w,y,x;
//assigning values to the variables
cout << "the number of days is : ";
cin >>d;
//performing calculations 
y = d/365;
w = (d-(y*365))/7;
x = (d-(y*365)-(w*7));
//print the results
cout << "years "<<y<<" weeks "<<w<<" days "<<x<<endl;
return 0;
}
