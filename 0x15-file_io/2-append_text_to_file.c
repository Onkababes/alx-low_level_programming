#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content
 *
 * Return: 1 if suceeds, -1 if not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_fl, size, t;

	if (filename == NULL)
		return (-1);

	open_fl = open(filename, O_WRONLY | O_APPEND);
	if (open_fl == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (t = 0; text_content[t] != '\0'; t++)
			;

		size = write(open_fl, text_content, t);
		if (size == -1)
		{
			close(open_fl);
			return (-1);
		}
	}

	close(open_fl);
	return (1);
}
