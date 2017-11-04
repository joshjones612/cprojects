
#include <stdio.h>

int main(int argc, char *argv[])
{
	/**************************
	***** 99 Bottles of beer reddit challenge *****

	**** RULES****

	***************************/

	 for (int i = 99; i>0; i--){

		if (i > 1) {
			printf("%i bottles of beer on the wall, %i bottles of beer, take one down and pass it around, %i bottles of beer on the wall. \n\n", i, i, i-1);
		}
		else {
			printf("%i bottle of beer on the wall, %i bottle of beer, take one down and pass it around, %i bottle of beer on the wall. \n\n", i, i, i-1);
		}
	}
}

