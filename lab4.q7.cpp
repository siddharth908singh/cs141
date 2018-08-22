//include librarysqr
#include<iostream>
using namespace std;
#include<math.h>

//mention the main variable
int main() 
{
//declaring the variables
float side,area;
//assigning values to the variables
cout << " the side of an equilateral triangle is : ";
cin >>side;
//calculations
area = sqrt(3)*side*side/4;

//print the results
cout << " the area of the equilateral triangle is : "<<area<<endl;
return 0;
}
