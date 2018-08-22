//include library
#include<iostream>
using namespace std;
//mention main function
int main()
{
cout<< "in triangle ABC "<<endl;
//declare the variables
int A,B,C;
//assigning values to the variables
cout << "enter the angle A : ";
cin >>A;
cout << "enter the angle B : ";
cin >> B;
//calculate the third angle of the traiangle
C = 180-A-B;
//print the results
cout << "the third angle C is : " <<C<<endl;
return 0;
}
