#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		int	i;

		i = 0;
		while (av[1][i] != '\0')
		{
			if (('a' <= av[1][i] && av[1][i] <= 'm') || ('A' <= av[1][i] && av[1][i] <= 'M') )
				ft_putchar(av[1][i] + 13);
			else if (('n' <= av[1][i] && av[1][i] <= 'z') || ('N' <= av[1][i] && av[1][i] <= 'Z'))
				ft_putchar(av[1][i] - 13);
			else
				ft_putchar(av[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
