//include libray
#include <iostream>
#include <string>
using namespace std;
//mention the main function
int main()
{
	//defining the variables
   	int x,y,z;
    	cout << " enter number of rows: ";
    	cin >> x;
   	for(y=1;y<=x;y++)
  	{
	for(z=1;z<=y;z++)
	cout<<'*';
	cout<<endl;
	}	
}

