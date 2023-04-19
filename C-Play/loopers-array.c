#include <stdio.h>


int main(void){

	/*sentinel value of -1*/
	int arrayOne[] = {25, 50, 75, 100, -1};
	
	int arrayTwoSize = 2;
	int arrayTwo[arrayTwoSize];	
	arrayTwo[0] = 10;
	arrayTwo[1] = 20;

	//multi dimensional arrays
	int array2D[2][2] = {
		{1, 2}, {3, 4}
	};

	for(int i = 0; i < arrayTwoSize; i++){
		printf("current array value is %d\n", arrayTwo[i]);
	}

	printf("\n");
	
	int j, k;
	for(j = 0; j < 2; j++){
		printf("row %d of 2D array\n", j+1);
		printf("{%d, %d}\n", array2D[j][0], array2D[j][1]);
	}


	return 0;
}
