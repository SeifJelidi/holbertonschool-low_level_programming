#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * Description: copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file_from, file_to, fileread, filewrite;
	char text[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((fileread = read(file_from, text, 1024)) > 0)
	{
		filewrite = write(file_to, text, fileread);
		if (filewrite == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (fileread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileread = close(file_from);
	if (fileread == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	filewrite = close(file_to);
	if (filewrite == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
