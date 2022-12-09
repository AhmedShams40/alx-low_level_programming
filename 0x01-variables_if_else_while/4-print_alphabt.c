#include <stdio.h>

/**
* main - Lanzador.
*
* Return: Always 0.
*/

int main(void)
{
	char a = 'a';
	char b = 'A';

	for (a = 'a'; a <= 'z'; a++)
	{
    if(a != 'q' && a != 'e')
		putchar(a);
	}
	putchar('\n');
	return (0);
}
