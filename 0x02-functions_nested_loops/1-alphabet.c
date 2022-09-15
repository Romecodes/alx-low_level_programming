#include "main.h"
/**
 * Print_alphaber - uses void _putchar to print out the alphabet.
 * twice in 2 lines.
 *
 * Return: Void on success.
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
