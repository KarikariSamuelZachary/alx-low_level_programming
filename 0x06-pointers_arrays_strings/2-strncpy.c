#include "main.h"

/**
 * *_strncpy - The function copies n bytes of string to another string
 * @dest: The first string to be copied
 * @src: The string that the initial is copied to
 * @n: Total number of bytes to be copied
 * Return: Pointer to the second string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
