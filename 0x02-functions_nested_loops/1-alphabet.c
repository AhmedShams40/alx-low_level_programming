#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet()
{
	char x='a';
	for(x = 'a' ; x < 'z' ; x++)
	{
		putchar(x);
	}
	
}

int main(void)
{
    print_alphabet();
	putchar('\n');
    return (0);
}