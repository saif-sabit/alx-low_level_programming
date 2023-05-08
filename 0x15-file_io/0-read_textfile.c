#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
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


	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	n = read(fd, buf, letters);
	wn = write(1, buf, n);
	free(buf);
	close(fd);
	return (wn);
}

