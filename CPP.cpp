
#include <iostream>
using namespace std;
int main()
{

	int n;
	cout << "nhap so: ";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int h = 0; h < i; h++)
		{
			cout << " * ";
		} cout << endl;
	}
	cout << endl ;
	for (int i = 0; i <= n; i++)
	{
		for (int h = n ; h > i; h--)
		{
			cout << " * ";
		} cout << endl ;
	}


	return 0;
}