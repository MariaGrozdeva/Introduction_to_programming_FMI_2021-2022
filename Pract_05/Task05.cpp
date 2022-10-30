#include <iostream>
using namespace std;

int main()
{
	int leavesLevel;
	cin >> leavesLevel;

	int cols = 2 * leavesLevel - 1;
	int middle = cols / 2;
	int hight = leavesLevel + (leavesLevel / 2);

	for (int i = 0; i < hight; i++) 
	{
		if (i < leavesLevel) 
		{
			for (int j = 0; j < cols; j++) 
			{
				if (j < middle - i || j > middle + i) 
				{
					cout << "  ";
					continue;
				}

				cout << "* ";
			}
		}
		else
		{
			for (int j = 0; j < cols; j++) 
			{
				if (j == middle)
					cout << "* ";
				else 
					cout << "  ";
			}
		}
		cout << endl;
	}
}