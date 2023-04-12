#include <stdlib.h>
#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words from
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int count = 0;
	char *p = str;

	if (str == NULL || *str == '\0')
		return (0);
	while (*p != '\0')
	{
		if (*p != ' ' && (*(p + 1) == ' ' || *(p + 1) == '\0'))
			count++;
		p++;
	}
	return (count);
}
/**
 * word_length - computes the length of a word
 * @str: the string containing the word
 *
 * Return: the length of the word
 */
int word_length(char *str)
{
	int len = 0;

	while (*str != ' ' && *str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (Success),
 * or NULL if memory allocation fails or if str has no words
 */
char **strtow(char *str)
{
	char **result = NULL;
	int i = 0, j = 0, k = 0, len = 0, words = 0, word_len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);
	result = malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len && k < words; i++)
	{
		if (str[i] != ' ')
		{
			word_len = word_length(&str[i]);
			result[k] = malloc(sizeof(char) * (word_len + 1));
			if (result[k] == NULL)
			{
				while (k-- > 0)
					free(result[k]);
				free(result);

				return (NULL);
			}
			for (j = 0; j < word_len; j++)
				result[k][j] = str[i + j];
			result[k++][word_len] = '\0';
			i += word_len;
		}
	}

	result[k] = NULL;

	return (result);
}
