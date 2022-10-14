#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)

{

	char v;
	int w;
	long int x;
	long long int y;
	float z;

	printf("Size of a char: %ld byte(s)\n", sizeof(v));
	printf("Size of a int: %ld byte(s)\n", sizeof(w));
	printf("Size of a long int: %ld byte(s)\n", sizeof(x));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(y));
	printf("Size of a float: %ld byte(s)\n", sizeof(z));
	return (0);
}
