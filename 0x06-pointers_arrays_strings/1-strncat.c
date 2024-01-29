#include "main.h"

/* _strncat - Adds n bytes of forst string to the second
 * @dest: This is the first string
 * @src: Second string
 * @n: Th total number of bytes to be added to @dest
 * Return: pointer to the second string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
		if (src[i] == '\0')
			break;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
