#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int ac, char **av)
{
	int	**range;

	if (ac == 3)
	{
		printf("%d\n", ft_ultimate_range(range, atoi(av[1]), atoi(av[2])));
	}
	return (0);
}
