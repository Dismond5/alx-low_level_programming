#include<stdio.h>

/**
 * main - print letters lowercase
 *	not equal to e or q.
 *
 *	Return: Always =0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchat('\n');

	return (0);
}
