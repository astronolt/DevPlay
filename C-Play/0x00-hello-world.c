#include <stdio.h>

int main(void)
{
	int num = 10;
	float decimalOne = 1.1;
	char letter = 'c';

	printf("Hello world\n");
	printf("This is a number(%d) and a character(%c)\n", num, letter);
	printf("This is a decimal(%f) and a rounded-up by 2 digits decimal(%.2f)\n", decimalOne, decimalOne);
	return (0);
}
