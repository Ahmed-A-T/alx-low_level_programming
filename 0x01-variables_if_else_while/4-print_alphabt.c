#include <stdio.h>

/**
 * main - main function prints the alphabet in lowercase
 * except q and e
 * Return: main function returns 0
*/
int main(void)
{
	char num;

	num = 97;
	while (num < 123)
	{
		if (num != 101)
			if (num != 113)
				putchar(num);
		num += 1;
	}
	putchar(10);

	return (0);
}
