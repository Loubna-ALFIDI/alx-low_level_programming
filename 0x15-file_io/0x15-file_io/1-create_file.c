#include "main.h"
/**
 * create_file - creat a file
 * @filename: parametre
 * @text_content: parametre
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text, a;

	if (filename == NULL)
		return (-1);
	text = 0;
	if (text_content != NULL)
		while (text_content[text])
			text++;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	a = write(fd, text_content, text);
	if (a == -1)
		return (-1);
	close(fd);
	return (1);
}
