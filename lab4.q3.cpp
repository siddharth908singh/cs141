//include library
#include<iostream>
using namespace std;
//define the main function
int main ()
{
//declare the variables
float f,c;
//assigning values to variables
cout << "enter temperature in degree fahrenheit : ";
cin >> f ;
//convert temperature into degree celsius
c = ((f-32)*5/9);
//print the results
cout << "temperature in degree celsius is "<< c<< endl;
return 0;
}
