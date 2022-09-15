#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int count;

	count = 0;
	while (count < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		count++;
		_putchar('\n');
	}
}
