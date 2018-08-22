//include library
#include<iostream>
using namespace std;
//mention main function
int main() {
//declare the variables
float c,f;
//enter the values for variable
cout << "enter the temperature in celsius : ";
cin >> c;
//convert the temperature into fahrenheit
f = ((c*9/5)+32);
//print the results
cout << "temperature in fahrenheit is "<<f<<endl;
return 0;
}
