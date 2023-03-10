#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints your name
 * @argc: number of command line args
 * @argv: the actual args
 * Returns: always 0
 */
int main(int argc,char* argv[])
{
	printf("%s\n",argv[argc - 1]);
	return (0);
}
