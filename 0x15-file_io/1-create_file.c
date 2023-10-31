#include "main.h"

/**
 * create_file - function that create a file.
 * @filename: The file.
 * @text_content: The text content to write the file.
 *
 * Return: 1 id succeeds, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int open_fl, size, t;

	if (filename == NULL)
		return (-1);

	open_fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
