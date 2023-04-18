#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int num = 10;
	float decimalOne = 1.1;
	int decimalConv = (int) decimalOne;
	char letter = 'c';
	bool isTruthy = true;
	bool isFalsy = false;

	printf("Hello world\n");
	printf("\n");

	printf("This is a number(%d) and a character(%c)\n", num, letter);
	printf("This is a decimal(%f) and a rounded-up by 2 digits decimal(%.2f)\n", decimalOne, decimalOne);
	printf("This is an explicite convertion of float(%f) to an interger(%d)\n", decimalOne, decimalConv);

	/*Boolean*/
	printf("This is a truthy(%d) and falsy(%d) representation of booleans\n", isTruthy, isFalsy);
	printf("\n");
	
	/*Memory sizes*/
	printf("The memory size of the number(%d) is (%lu)\n", num, sizeof(num));
	printf("The memory size of the letter(%c) is (%lu)\n", letter, sizeof(letter));

	return (0);
}
