//include library
#include <iostream>
using namespace std;
// mentioning the main function
int main()
//ask for input
{
	int size;
    	char a;
    	cout << "enter a symbol you want to make a square with: "<<endl;
    	cin>>a;
    	cout << " enter the number of symbols in a side: ";
    	cin >> size;
    	for (int row = 1; row <= size; ++row) 
    	{
        	for (int col = 1; col <= size; ++col) 
        	{
            	cout << a;
        	}
        	cout << endl;
    	}
    	return 0;
}

