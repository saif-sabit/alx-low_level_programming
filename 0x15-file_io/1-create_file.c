#include "main.h"
/**
 * create_file- Creates file
 * @filename: name of file to be created
 * @text_content: text to be writen
 * Return: Number of char writen
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, wc = 0;

	if (!filename)
		return (-1);
	if (text_content)
		while (text_content[i] != '\0')
			i++;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wc = write(fd, text_content, i);
	if (wc == -1)
		return (-1);
	close(fd);
	return (1);
}

