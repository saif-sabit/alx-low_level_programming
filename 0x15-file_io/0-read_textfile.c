#include "main.h"
/**
 * read_textfile- Reads text file
 * @filename: name of the file to be read
 * @letters: number of letters to be read and written
 * Return: Number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t n, wn, fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);
	n = read(fd, buf, letters);
	if (n == -1)
		return (0);
	wn = write(1, buf, n);
	if (wn == -1 || wn != n)
		return(0);

	free(buf);
	close(fd);
	return (n);
}

