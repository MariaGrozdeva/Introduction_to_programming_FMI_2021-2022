#include <iostream>
using namespace std;

void printCurrentArr(const int* currentArr, int len)
{
	for (size_t i = 0; i < len; i++)
		cout << currentArr[i];
	cout << ' ';
}

void allNumbersWithNIncreasingDigits(int n, int* currentArr, int len, int pos, int start)
{
	if (!n)
	{
		printCurrentArr(currentArr, len);
		return;
	}

	for (size_t i = 0; i <= 9; i++)
	{
		currentArr[pos] = i;	
		if (i - start + 1 > pos)
		{
			allNumbersWithNIncreasingDigits(n - 1, currentArr, len, pos + 1, start);
			start++;
		}
	}
}

void allNumbersWithNIncreasingDigits(int n)
{
	int len = n;
	int* current = new int[len];
	int pos = 0;
	int start = 0;
	allNumbersWithNIncreasingDigits(n, current, len, pos, start);

	delete[] current;
}

int main()
{
	int n;
	cin >> n;
	allNumbersWithNIncreasingDigits(n);
}
