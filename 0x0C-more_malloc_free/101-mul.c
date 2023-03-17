#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
        int i = atoi(argv[1]);
        int j = atoi(argv[2]);
        if (i == 0 || j == 0)
        {
        printf("Error\n");
		exit(98);
        }
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
