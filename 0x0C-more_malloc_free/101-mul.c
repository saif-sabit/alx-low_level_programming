#include <stdio.h>
#include <stdlib.h>
int is_number(char *p)
{
	unsigned int i;
	
	i = 0;
	while(p[i] != '\0')
	{
		if (!(p[i] > 47 && p[i] < 58))
			return (1);
		i++;
	}
	return (0);
}
/**
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (is_number(argv[1])== 1 || is_number(argv[2])==1)
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
