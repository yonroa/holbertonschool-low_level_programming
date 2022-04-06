#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: Number of arguments
 * @av: Array of the arguments
 * Return: 0 if success, -1 if it fails
 */
int main(int ac, char **av)
{
	int file, file2, path, destiny, end, end2;
	char buffer[BUFSIZ];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file = open(av[1], O_RDONLY);
	path = read(file, buffer, BUFSIZ);
	if (file == -1 || path == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(file);
		exit(98);
	}
	file2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	destiny = write(file2, buffer, path);
	if (file2 == -1 || destiny == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(file2);
		exit(99);
	}
	end = close(file);
	end2 = close(file2);
	if (end == -1 || end2 == -1)
	{
		if (end == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file);
		if (end2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file2);
		exit(100);
	}
	return (0);
}

