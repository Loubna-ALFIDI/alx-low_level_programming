#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: const char *
 * @text_content: char*
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (!filename)
		return (-1);
	if (access(filename, F_OK) == -1)
		return (-1);
	if (!text_content)
		return (1);
	file = fopen(filename, "a");
	if (!file)
		return (-1);
	fputs(text_content, file);
	fclose(file);
	return (1);
}
