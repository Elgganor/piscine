#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		ft_contain_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		ft_putchar('\n');
	else
	{
		int	i;

		i = 0;
		if (ft_contain_char(av[1], av[2][0]) == 0)
			ft_putstr(av[1]);
		else
		{
			while (av[1][i] != '\0')
			{
				if (av[1][i] == av[2][0])
					ft_putchar(av[3][0]);
				else
					ft_putchar(av[1][i]);
				i++;
			}
		}
		ft_putchar('\n');
	}
	return (0);
}
