#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	nb;

	nb = 0;
	if (ac == 4)
	{
		if (av[2][0] == '+')
		{
			nb = atoi(av[1]) + atoi(av[3]);
			printf("%d", nb);
		}
		else if (av[2][0] == '-')
		{
			nb = atoi(av[1]) - atoi(av[3]);
			printf("%d", nb);
		}
		else if (av[2][0] == '*')
		{
			nb = atoi(av[1]) * atoi(av[3]);
			printf("%d", nb);
		}
		else if (av[2][0] == '/' && av[3][0] != '0')
		{
			nb = atoi(av[1]) / atoi(av[3]);
			printf("%d", nb);
		}
	}
	printf("\n");
	return (0);
}
