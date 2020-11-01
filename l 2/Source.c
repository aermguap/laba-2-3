#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define Check_Symbol ( ( (s[i] > 64) & (s[i] < 91) ) || ( (s[i] > 96) & (s[i] < 123) ) || ( (s[i] > 127) & (s[i] < 176) ) || ( (s[i] > 223) & (s[i] < 240) ) )


void print(unsigned char* m, int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		printf("%c", m[i]);
	}

	printf("\n");
}


int main()
{
	unsigned char s[100];

	printf("Enter a string \n");

	int a[50][3] = { 0 };


	gets(s);

	int i = 0;	int x = 0; 	int j = 0;	int min = 0;	int t = 0;	int k = 0;	int minInd = 0;


	while (s[i] != '\0')
	{
		x++;

		i++;
	}


	for (int i = 0; i <= x - 1; i++)
	{
		if (Check_Symbol & (t == 0))
		{
			a[j][t] = i;

			t = 1;

		}
		if ((!(Check_Symbol)) & (t == 1))
		{

			a[j][t] = i - 1;

			j++;

			t = 0;

		}
		if ((s[i + 1] == '\0') & (t == 1))
		{
			a[j][1] = i;

		}

	}

	j = 1;
	while (a[j][1] != 0)
	{
		k++;

		j++;
	}
	min = 100;

	for (i = 0; i < 10; i++)
	{
		printf("\n");

	}

	for (j = 0; j <= k; j++)
	{
		if (a[j][1] - a[j][0] + 1 < min)
		{
			min = a[j][1] - a[j][0] + 1;

			minInd = j;
		}
	}
	

	printf("\nShortest word: \n");

	print(s, a[minInd][0], a[minInd][1]);
	

	return 0;
}
