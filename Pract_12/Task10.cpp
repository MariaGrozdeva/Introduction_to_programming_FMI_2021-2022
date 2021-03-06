#include <iostream>

bool isCapital(char symbol)
{
	return symbol >= 'A' && symbol <= 'Z';
}

int idxOfFirstCapitalLetter(const char* str, int size, int currentPos)
{
	if (currentPos == size)
		return -1;

	if (isCapital(str[currentPos]))
		return currentPos;
	else
		return idxOfFirstCapitalLetter(str, size, currentPos + 1);
}

int idxOfFirstCapitalLetterWrapper(const char* str, int size)
{
	return idxOfFirstCapitalLetter(str, size, 0);
}

int main()
{
	const char* str = "abcMdGREm";
	int len = strlen(str);
	std::cout << "Index of the first capital letter is: " << idxOfFirstCapitalLetterWrapper(str, len);

	return 0;
}
