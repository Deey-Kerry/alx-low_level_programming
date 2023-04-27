#include<stdio.h>

void myGoodSense(void) __attribute__((constructor));

/**
 * myGoodSense - prints the function mygoodsense
 */
void myGoodSense(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
