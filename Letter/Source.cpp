#include<iostream>
using namespace std;

int main()
{
	char word[50];
	char* w;
	scanf_s("%s", word, 49);
	w = word;
	while (*w != '\0')
	{
		if ((*w >= 'a') && (*w <= 'z'))
		{
			printf("%c", *w - 'a' + 'A');
		}
		else
			if ((*w >= 'A') && (*w <= 'Z'))
			{
				printf("%c", *w - 'A' + 'a');
			}
		w += 1;
	}
}