#include "holberton.h"

/**
 * create_file - Function that creates a file.
 * @filename: The name of the file to create.
 * @text_content: Is a string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int x;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);

	for (x = 0; text_content[x] != '\0'; x++)
	{
		if (write(fd, &text_content[x], 1) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
