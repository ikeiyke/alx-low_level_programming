#include<stdio.h>
/**
 * main - Numbers.
 * Description: Prints letter a to z in reverse and in lowercase
 * Return: 0
 */

int main(void)
{
	char letter = 'z';

		for (letter = 'z'; letter >= 'a'; letter--)
		{
			putchar(letter);
		}
	putchar('\n');
	return (0);
}
