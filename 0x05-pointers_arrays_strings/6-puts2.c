#include "main.h"

/*
 * puts2 - prints xters of a string
 * @str: the used string reference
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
