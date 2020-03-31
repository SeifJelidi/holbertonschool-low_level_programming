#include "holberton.h"

/**
 * create_file - creates a file
 * Description: creates a file
 * @filename: string character
 * @text_content: file content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filedesc, filewrite, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	filedesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filedesc == -1)
		return (-1);
	filewrite = write(filedesc, text_content, i);
	if (filewrite == -1)
	{
		close(filedesc);
		return (-1);
	}
	close(filedesc);
	return (1);
}
