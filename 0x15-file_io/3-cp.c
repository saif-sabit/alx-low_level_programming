#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * copy_textfile- Copies text file into another
 * @file_from: name of the file to be read from
 * @file_to: name of the file to write to
 * Return: Number of letters copied
 */
void copy_textfile(const char *file_from, const char *file_to)
{
	char *buf;
	int n, cs, cs2, wn, fd, fd2;

	buf = malloc(1024 * sizeof(char));

	fd = open(file_from, O_RDONLY);
	n = read(fd, buf, 1024);
	if (fd == -1 || n == -1)
	{
		dprintf(2, "Error: Can't read from file %s", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0644);
	wn = write(fd2, buf, n);
	if (wn == -1 || fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s", file_to);
		exit(99);
	}
	free(buf);
	cs = close(fd);
	if (cs != 0)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}
	cs2 = close(fd2);
	if (cs2 != 0)
	{
		dprintf(2, "Error: Can't close fd %d", fd2);
		exit(100);
	}
}
/**
 * main- Entry point of program
 * @ac: no of args
 * @av: pointer to args
 * Return: 0 on success or -1 on failliar
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_textfile(av[1], av[2]);
	return (0);
}
