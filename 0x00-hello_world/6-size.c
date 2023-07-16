#include <stdio.h>
/**
* main - a C program that prints the size of various types on the computer it is compiled and run on
* requirements install libc6-dev-i386 to test -m32 gcc option
* Return: 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %zu byte(s)\n",(unsigned long)sizeof(a));
printf("Size of an int: %zu byte(s)\n",(unsigned long)sizeof(b));
printf("Size of a long: %zu byte(s)\n",(unsigned long)sizeof(c));
printf("Size of a long long: %zu byte(s)\n",(unsigned long)sizeof(d));
printf("Size of a float: %zu byte(s)\n",(unsigned long)sizeof(f));
return 0;
}
