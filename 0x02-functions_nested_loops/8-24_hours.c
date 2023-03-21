#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: always 0
 */
void jack_bauer(void)
{
	int k, l, m, n;

	for (k = 0; k <= 2; k++)
	{
		for (l = 0; l <= 9; l++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (n = 0; n <= 9; n++)
				{
					if (k >= 2 && l >= 4)
						break;
					_putchar(k + 48);
					_putchar(l + 48);
					_putchar(58);
					_putchar(m + 48);
					_putchar(n + 48);
					_putchar('\n');
				}
			}
		}
	}
}
