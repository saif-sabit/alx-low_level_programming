#include "main.h"
/**
 * append_text_to_file - Appends text to file
 * @filename: File name
 * @text_content: text to be appended
 * Return: 1 on success or -1 on failliar
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, wc = 0;

	while (text_content[i] != '\0')
		i++;
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (!filename)
		return (-1);
	if (text_content)
	{
		wc = write(fd, text_content, i);
		if (wc == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

