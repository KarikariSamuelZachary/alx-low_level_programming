#include "main.h"

/*
 * This function copies one string to another and a pointer to the new string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len_src = 0;

	while (src[len_src] != '\0')
		len_src++;

	for (i = 0; i <= len_src; i++) /* <= to include null char */
	{
		dest[i] = src[i];
	}

	return (dest);
}
