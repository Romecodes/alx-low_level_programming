#include <stdio.h>
/**
 * main- this program prints the alphabets in
 * uppercase and then in lowercase
 * Return: 0 if no error encountered, else returns an integer
 */
int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
