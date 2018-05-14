#include<stdio.h>
#include<string.h>

void main(){
	char string[100];
	int num, num1;
	printf("Enter a string: ");
	gets(string);
	printf("Enter the number of times you want to print the string: ");
	scanf("%d", &num);
	printf("Enter the number of spaces you want in between: ");
	scanf("%d", & num1);

	for (int i = 0; i < num; i++){
		printf(string);
		for (int j = 0; j < num1; j++)
			printf(" ");
	}
}