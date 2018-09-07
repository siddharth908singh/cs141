//include library
#include<iostream>
using namespace std;
//mention the main function
int main()
{
	//defining the variables
	int x,y,z;
	//asking for input
	cout<< " enter number of rows : "<<endl;
	cin>>x;
	//printing the pattern
	for (y=1;y<=x;y++)
	{
	for (z=1;z<=x;z++)
	{
	if ((y==1)||(y==x))
	cout<<"*";
	else
	{
	if((z==1)||(z==x))
	cout<<"*";
	else
	cout<<" ";
	}
	}
	cout<<endl;
	}return 0;
}
