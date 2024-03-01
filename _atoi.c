#include "shell.h"

/**
 * interactive - This function checks if the shell is interactive mode.
 *
 * @info: This is the struct address.
 *
 * Return: 1 if the shell is interactive mode if not returns 0.
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * _isalpha - This function checks for alphabetic character.
 *
 * @c: the character to be checked.
 *
 * Return: 1 if c is Alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

/**
 * is_delim - This Function checks if the character is a delimeter.
 *
 * @c: the character to be checked.
 *
 * @delim: the delimeter string.
 *
 * Return: 1 if the character is delimeter if not returns 0.
 */
int is_delim(char c, char *delim)
{
	for (; *delim != '\0'; delim++)
	{
	if (*delim == c)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	}
	return (0);
}

/**
 * _atoi - This Function converts a string to an integer.
 *
 * @s: the input string.
 *
 * Return: the converted output integer if not returns 0.
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;

	while (*s == ' ')
	{
	s++;
	}
	if (*s == '-' || *s == '+')
	{
	sign = (*s++ == '-') ? -1 : 1;
	}
	while (*s >= '0' && *s <= '9')
	{
	result = result * 10 + (*s++ - '0');
	}
	return (sign * result);
}
