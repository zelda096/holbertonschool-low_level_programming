#include "holberton.h"
/**
* append_text_to_file - append text to the end of file
* @filename: filename
* @text_content: text to append
* Return: -1 if append
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int length;

	if (!filename)
		return (-1);
	op = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (op == -1)
		return (-1);
	if (text_content)
	{
		length = 0;
		while (text_content[length])
			length++;
		wr = write(op, text_content, length);
		if (wr == -1)
			return (-1);
	}
	close(op);
	return (1);
}
