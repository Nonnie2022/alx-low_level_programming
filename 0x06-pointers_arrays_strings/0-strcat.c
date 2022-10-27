#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @scr: copy from
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *scr)
{
	int i;
	int j;

	i = 0;
	while (dest[i] '!= '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
