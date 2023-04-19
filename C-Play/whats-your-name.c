#include <stdio.h>

int main(void){
	int number;
	char letter;
	char name[30];

	printf("Hi whats your name?\n");
	scanf("%s", name);

	printf("Pick a number:\n");
	scanf("%d", &number);
	
	printf("Hello %s. Your number is %d\n", name, number);

	return (0);
}
