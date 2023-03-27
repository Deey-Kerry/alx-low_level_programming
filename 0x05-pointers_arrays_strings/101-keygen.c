#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function begins here
 * Return: Random valid passwords
 */
int main(void)
{
	int pass[100];
	int a, sum, k;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		sum += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			k = 2772 - sum - '0';
			sum += k;
			putchar(k + '0');
			break;
		}
	}
	return (0);
}
