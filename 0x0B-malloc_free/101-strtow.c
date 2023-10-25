#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * count_words - Function to count the number of words
 * @str: string
 * Return: words
 */

int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

		while (*str)
		{
		if (*str == ' ')
		{
		is_word = 0;
		}
		else if (is_word == 0)
		{
		is_word = 1;
		count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Function to split a string into words
 * @str: string
 * Return: Pointer to an array
 */
char **strtow(char *str)
{
	int num_rds, i;
	char **rds, *rd;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_rds = count_words(str);
	if (num_rds == 0)
		return (NULL);

	rds = malloc((num_rds + 1) * sizeof(char *));
	if (rds == NULL)
		return (NULL);

	i = 0;
	rd = strtok(str, " ");

	while (rd)
	{
		rds[i] = malloc(strlen(rd) + 1);
		if (rds[i] == NULL)
		{
			for (i = 0; i < num_rds; i++)
				free(rds[i]);
			free(rds);
			return (NULL);
		}
		strcpy(rds[i], rd);
		rd = strtok(NULL, " ");
		i++;
	}

	rds[i] = NULL;
	return (rds);
}
