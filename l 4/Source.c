#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char s[100];
	int i = 0;	int count = 0; int count2 = 0;  int count3 = 0;
	gets(s);
	while (s[i] != '\0') {
		count2++;
		i++;
	}
	for (int i = 0; i < count2 + 1; i++) {
		if (s[i] != ' ') 
			printf("%c", s[i]);
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'À' && s[i] <= 'ß') || (s[i] >= 'à' && s[i] <= 'ÿ'))
			count3++;		
		if (s[i] == ' ') {
			count++;
			for (int i = 0; i < count3; i++)
				printf(" ");
			count3 = 0;
		}
	}
	printf("\nthat all fo now\n");
}
