#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ABS(atoi(av[1])));
	}
	return (0);
}
