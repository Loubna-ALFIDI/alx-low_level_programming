#include "main.h"
#include "string.h"

/**
 * create_file - create a file
 * @filename: const char *
 * @text_content: char *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t b;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		b = write(file, text_content, strlen(text_content));
		if (b == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
