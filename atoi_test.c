#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	long long	answer;
	int			sign;
	int			i;

	answer = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		answer *= 10;
		answer += str[i] - '0';
		i++;
	}
	return ((int)answer * sign);
}

int main()
{
	char *s;
	s = "";
	printf("Them: %d, You: %d",atoi(s), ft_atoi(s));
}