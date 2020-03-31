#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * Description: appends text at the end of a file
 * @filename: string character
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedesc, filewrite, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[i] != '\0')
		i++;
	filedesc = open(filename, O_RDWR | O_APPEND);
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
