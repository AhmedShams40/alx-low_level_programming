#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet()
{
	char x = 'a';
	for(x = 'a' ; x < 'z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
