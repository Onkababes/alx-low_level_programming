#include "main.h"

#define BUF_SIZE 1024

/**
 * leav_pblm - Prints an error message and exits with the provided code.
 * @depart: The exit code.
 * @data: The error message to print.
 */
void leav_pblm(int depart, const char *data)
{
	dprintf(STDERR_FILENO, "%s\n", data);
	exit(depart);
}

/**
 * main - function that copies the content of a file to another file.
 * @argc: The number.
 * @argv: The array.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, size_discl, size;
	char buffer[BUF_SIZE];

	if (argc != 3)
		leav_pblm(97, "Usage: cp file_from file_to");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		leav_pblm(98, "Error: Can't read from file");

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		leav_pblm(99, "Error: Can't write to file");

	while ((size_discl = read(file_from, buffer, BUF_SIZE)) > 0)
	{
		size = write(file_to, buffer, size_discl);
		if (size != size_discl)
			leav_pblm(99, "Error: Can't write to file");
	}

	if (size_discl == -1)
		leav_pblm(98, "Error: Can't read from file");

	if (close(file_from) == -1)
		leav_pblm(100, "Error: Can't close file descriptor");
	if (close(file_to) == -1)
		leav_pblm(100, "Error: Can't close file descriptor");

	return (0);
}
