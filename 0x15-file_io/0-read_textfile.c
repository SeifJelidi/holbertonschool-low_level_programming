#include "holberton.h"

/**
* read_textfile - reads a text file and prints it
* Description: reads a text file and prints it
* @filename: string character
* @letters: number of letters it should read and print
* Return: actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc, fileread, filewrite;
	char *text;

	if (filename == NULL)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);
	filedesc = open(filename, O_RDWR);
	if (filedesc == -1)
	{
		free(text);
		return (0);
	}
	fileread = read(filedesc, text, letters);
	if (fileread == -1)
	{
		free(text);
		close(filedesc);
		return (0);
	}
	filewrite = write(1, text, fileread);
	if (filewrite < 0)
	{
		free(text);
		close(filedesc);
		return (0);
	}
	free(text);
	close(filedesc);
	return (filewrite);
}
