#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * follwed by a new line except q and e
 * return: always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
