#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float funct(float num1, float num2)  // raise one number to the power of another number
{
	if (num2 == 0)
	{
		return 1;
	}
	else
	{
		{
			float x;

			x = num1;
			if (num2 < 0) {
				for (int i = -1; i > num2; i--)
				{
					num1 = x * num1;
				}
				return 1 / num1;
			}

			else {
				for (int i = 1; i < num2; i++)
				{
					num1 = x * num1;
				}

				return num1;
			}
		}
	}
}

int main()
{
	float x;
	float y;

	printf("enter the number and the degree to which you want to raise the number: ");
	if (scanf("%f", &x) != 1)
	{
		printf("Input Error");

		return 0;
	}
	if (scanf("%f", &y) != 1)
	{
		printf("Input Error");
		return 0;
	}
	printf("result: %f\n", funct(x, y)); 

	return 0;
}

