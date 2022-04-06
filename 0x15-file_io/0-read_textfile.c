#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: File to be readed
 * @letters: Number of bites to print
 * Return: The number of bites printed
 * -1 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t num, num2;
	char *buffer;

	if (!filename)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	num = read(file, buffer, letters);
	if (num == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[num] = '\0';

	num2 = write(STDOUT_FILENO, buffer, num);
	if (num2 == -1)
	{
		free(buffer);
		return (0);
	}
	close(file);
	free(buffer);
	return (num2);
}
