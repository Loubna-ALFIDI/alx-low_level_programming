#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, t, a;

	if (filename == NULL)
		return (-1);
	t = 0;
	if (text_content != NULL)
		while (text_content[t])
			t++;
	file_des = open(filename, O_WRONLY | O_APPEND);
	a = write(file_des, text_content, t);
	if (a == -1)
		return (-1);
	close(file_des);
	return (1);
}
