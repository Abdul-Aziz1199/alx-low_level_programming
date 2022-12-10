#include <stdio.h>


int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %c byte(s)\n", (unsigned)sizeof(a));
	printf("size of an int: %d byte(s)\n", (unsigned)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(d);
        printf("size of a float: %f byte(s)\n", (unsigned)sizeof(f));
	return (0);
}
