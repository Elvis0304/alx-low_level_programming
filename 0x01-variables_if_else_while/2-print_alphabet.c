#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the letters of the alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}

