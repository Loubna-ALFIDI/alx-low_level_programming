#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX standard output.
 * @filename: const char *
 * @letters: size_t
 * Return: size_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t a, b, file;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	a = read(file, c, letters);
	b = write(STDOUT_FILENO, c, a);
	free(c);
	close(file);
	return (b);
}
