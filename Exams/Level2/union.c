#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	char	tab[256] = {0};
	int	i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (tab[av[1][i]] == 0)
			{
				tab[av[1][i]] = 1;
				ft_putchar(av[1][i]);
			}
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			if (tab[av[2][i]] == 0)
			{
				tab[av[2][i]] = 1;
				ft_putchar(av[2][i]);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
