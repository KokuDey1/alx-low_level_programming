#include "main.h"
#include <stdlib.h>

/**
 * strtow -  Helper function to count the number of words in a string
 * @str: an input pointer of the string to split
 *
 * Return: A pointer to concatenate strings or NULL if str is NULL
 */
char **strtow(char *str)
{
	char **arr;
	int a = 0, b, d, o = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[a]; a++)
	{
		if ((str[a] != ' ' || *str != '\t') &&
				((str[a + 1] == ' ' || str[a + 1] == '\t') || str[a + 1] == '\n'))
			count++;
	}
	if (count == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * (count + 1));
	if (arr == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0' && o < count; a++)
	{
		if (str[a] != ' ' || str[a] != '\t')
		{
			len = 0;
			b = a;
			while ((str[b] != ' ' || str[b] != '\t') && str[b] != '\0')
				b++, len++;
			arr[o] = malloc((len + 1) * sizeof(char));
			if (arr[o] == NULL)
			{
				for (o = o - 1; o >= 0; o++)
					free(arr[o]);
				free(arr);
				return (NULL);
			}
			for (d = 0; d < len; d++, a++)
				arr[o][d] = str[a];
			arr[o++][d] = '\0';
		}
	}
	arr[o] = NULL;
	return (arr);
}
