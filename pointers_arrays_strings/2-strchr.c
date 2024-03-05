#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}

/* Explanation: Let's say the function is searching for the character 'l'.
The loop iterates until it reaches s[2] = 'l'.
At this point, i will be 2 (index of the found character).
(s + i) becomes (0x1000 + 2).
In pointer arithmetic, adding 2 to s moves it two positions forward, pointing to the address 0x1002, which holds the character 'l'. */
