#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints char belw 10
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
