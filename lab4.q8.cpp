//include library
#include<iostream>
using namespace std;
//mention the main function
int main ()
{
//declare variables
float a,b,c,d,e,avg,tot,per;
//assigning values to variables
cout << "marks in physics is : ";
cin >>a;
cout << "marks in maths is : ";
cin >>b;
cout << "marks in chemistry is : ";
cin >>c;
cout << "marks in biology is : ";
cin >>d;
cout << "marks in english : ";
cin >>e;
//calculate average total and percentage
avg = (a+b+c+d+e)/5;
tot = a+b+c+d+e;
per = tot*100/500;
//print the results
cout << "total marks = "<<tot<<endl;
cout << "average marks = "<<avg<<endl;
cout << "percentage marks = "<<per<<endl;
return 0;
}
