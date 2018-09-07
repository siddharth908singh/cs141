//include library
#include<iostream>
#include<string>
using namespace std;
//mentioning the main function
int main ()
{
	//declaring the variables
	int x,y,z;
	//asking for input
	cout << " enter number of rows : ";
	cin>>x;
	for (y=x;y>=1;y--)
	{
	for (z=1;z<=y;z++)
	cout<<"*";
	cout<<endl;
	}
}
