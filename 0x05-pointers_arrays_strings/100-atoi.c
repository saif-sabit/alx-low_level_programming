#include "main.h"
/**
 * _atoi - converts char into int
 * @s: pointer
 * Return:  int
 */

int _atoi(char *s)
{
	unsigned int i, sign, num;

	i = 0;
	sign = 1;
	num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		if (num > 0 && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}
		i++;
	}
	return (num * sign);
}
