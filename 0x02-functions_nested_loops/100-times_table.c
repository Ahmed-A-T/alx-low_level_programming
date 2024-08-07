/*
 * Filename: 100-times_table.c
 * Author: Ahmed-A-T
 */
#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: number that we need to print it's times table
 *
 */
void print_times_table(int n)
{
	int i, j, result = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
			 	if (j == 0)
				{
					_putchar((result / 10) + '0');
				}
				else
				{
					if ((result >=0 && result < 10))
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar((result / 10) + '0');
					}
					else if ((result > 9) && (result < 100))
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((result / 10) + '0');
						_putchar((result % 10) + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar((result / 100) + '0');
						_putchar((result / 10) % 10 + '0');
						_putchar((result % 10) + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
