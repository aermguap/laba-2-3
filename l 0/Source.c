#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
    int a; int b; int c;
        printf(" has 3 numbers.the program will return the remainder after dividing the 1st by the 3rd#\n");
        if (scanf("%d", &a) != 1){ 
            printf("Input Error");
            return 0;
        }
        if (scanf("%d", &b) != 1) {
            printf("Input Error");
            return 0;
        }
        if (scanf("%d", &c) != 1) {
            printf("Input Error");
            return 0;
        } 
        printf("Result: %d", a%c);
        return 0;
}
