#include <stdio.h>
#include <ctype.h>

/**
* main - Lanzador.
*
* Return: Always 0.
*/

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
    for (a = 'a'; a <= 'z'; a++)
	{
		putchar(toupper(a));
	}
	putchar('\n');
	return (0);
}
