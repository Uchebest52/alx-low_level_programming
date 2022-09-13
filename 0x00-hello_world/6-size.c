#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "Programming is like a multiliggnual puzzle
* Return: 0
*/
int main(void)
{

	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of an int: %ld byte(s)\n", sizeof(a));
	printf("size of a long int: %ld byte(s)\n", sizeof(b));
	printf("size of a long long int: %ld byte(s)\n", sizeof(c));
	printf("size of a char: %ld byte(s)\n", sizeof(d));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
