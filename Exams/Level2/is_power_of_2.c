int	is_power_of_2(unsigned int nb)
{
	if (nb % 2 == 1)
	{
		return (0);
	}
	else
	{
		if ((nb / 2 == 1) && (nb % 2 == 0))
			return (1);
	}
	return (is_power_of_2(nb / 2));
}

#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	int	nb = atoi(av[1]);
	if (ac == 2)
	{
		printf("%d\n", is_power_of_2(nb));
	}
}
