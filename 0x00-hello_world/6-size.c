#include <stdio.h>
/**
 *main- is the entry point for the program
 *Return:zero if no error, Non-zero value if errors.
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of an int: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	
	return (0);
}
