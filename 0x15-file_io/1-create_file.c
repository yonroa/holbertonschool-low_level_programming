#include "main.h"

/**
 * create_file - creates a file
 * @filename: Name of the file to be created
 * @text_content: Content to be written in the file
 * Return: 1 if successes
 * -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int file, num;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		num = write(file, text_content, strlen(text_content));
		if (num == -1 || num != strlen(text_content))
			return (-1);
	}
	return (1);
}
