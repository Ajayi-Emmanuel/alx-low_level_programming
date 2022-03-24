#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalized all words in a string
 *
 * @s: character to be checked
 * Return: changed string
 */




char *cap_string(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + 0) >= 'a' && *(s + 0) <= 'z')
		{
			*(s + 0) = *(s + 0) - 32;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
				*(s + i + 1) = *(s + i + 1) - 32;
		}
		i++;
	}
	return (s);
}
