//include library
#include<iostream>
using namespace std;
//mention main function
int main (){
//declare the variables
float length1,length2,length3;
//enter value for variable
cout<< "enter length in centimetres : ";
cin >>length1;
//calcuate the values in different units
length2 = (length1/100);
length3 = (length1/100000);
//print the results
cout << " length in metres is = "<<length2<<endl;
cout << " length in kilometres is = "<<length3<<endl;
return 0;
}
