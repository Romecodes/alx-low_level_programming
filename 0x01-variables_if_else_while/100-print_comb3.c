#include <stdiio.h>
/**
 * main- this program prints out all possible
 * combinations of 2 unidential numbers.
 * Return: 0 if no errors occurs else a +ve integer.
 */
int main(void)
{
	int a;
	int b;
	for (a = '0'; a <= '9'; a++)
	{
		for (b + '1'; b <= '9'; b++)
			if (a != '9' && a != b)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			};
	};
	putchar('\n');
	return (0);
}
