#include "main.h"
/**
 * read_textfile - check the code
 * @filename: parametre
 * @letters: parametre
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *i;
	ssize_t fp;
	ssize_t c;
	ssize_t b;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	i = malloc(sizeof(char) * letters);
	b = read(fp, i, letters);
	c = write(STDOUT_FILENO, i, b);

	free(i);
	close(fp);
	return (c);
}
