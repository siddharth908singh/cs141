//include library
#include<iostream>
using namespace std;
//mentioning the main function
int main()
{
	//declaring variables
	int x,y,z;
	//asking for input
	cout<< " enter the number of rows : ";
	cin >>z;
	//print half of the pattern
	for (x=1;x<=z;x++)
	{
	for (y=x;y<=z;y++)
	{
	cout<<"*";
	}
	for(y=1;y<=(2*x-2);y++)
	{
	cout<<" ";
	}
	for(y=x;y<=z;y++)
	{
	cout<<"*";
	}
	cout<<endl;
	}
	//print other half of pattern
	for (x=1;x<=z;x++)
	{
	for(y=1;y<=x;y++)
	{
	cout<<"*";
	}
	for (y=(2*x-2);y<(2*z-2);y++)
	{
	cout<<" ";
	}
	for (y=1;y<=x;y++)
	{
	cout<<"*";
	}
	cout<<endl;
	}
return 0;
}
