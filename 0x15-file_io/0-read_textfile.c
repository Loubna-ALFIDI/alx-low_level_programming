#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: the number of letters it should read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t f_ptr, c, b;

	f_ptr = open(filename, O_RDONLY);
	if (f_ptr == -1)
		return (0);
	a = malloc(sizeof(char) * letters);
	b = read(f_ptr, a, letters);
	c = write(STDOUT_FILENO, a, b);

	free(a);
	close(f_ptr);
	return (c);
}
