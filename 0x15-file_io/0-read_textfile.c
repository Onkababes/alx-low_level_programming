#include "main.h"
#define BUF_SIZE 1024

/**
 * read_textfile - function that reads a text file and prints it.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_fl, size_discl, size;
	char *tmp;

	if (filename == NULL)
		return (0);

	open_fl = open(filename, O_RDONLY);
	if (open_fl == -1)
		return (0);

	tmp = malloc(sizeof(char) * (letters + 1));
	if (tmp == NULL)
		return (0);

	size_discl = read(open_fl, tmp, letters);
	if (size_discl == -1)
	{
		free(tmp);
		close(open_fl);
		return (0);
	}

	tmp[size_discl] = '\0';
	size = write(STDOUT_FILENO, tmp, size_discl);
	if (size != size_discl)
	{
		free(tmp);
		close(open_fl);
		return (0);
	}

	free(tmp);
	close(open_fl);
	return (size);
}
