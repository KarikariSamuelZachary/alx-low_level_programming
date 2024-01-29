#include "main.h"

/**
 * cap_tring - This function capitalizes the first letter of all the words in a
 * str
 * @s pointer to the string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int i = 0;
	int j, k;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	if (s[i] >= 'a' && s[i] <= 'z') /* make sure first char is cap */
		s[i] = s[i] - 32;

	while (s[i] != '\0')
			{
				k = i + 1;

			for (j = 0; j < 13; j++)
			{
				if (s[i] == sep[j] && s[k] != '\0')
				{
					if (s[k] >= 'a' && s[k] <= 'z')
					{
						s[i + 1] = s[i + 1] - 32;
						break;
					}
				}
			}

			i++;
			}
			return (s);
}
