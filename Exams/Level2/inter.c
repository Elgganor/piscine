#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;
	char	tab[256] = {0};

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s2[j])
		{
			if (tab[s1[i]] == 0 && s1[i] == s2[j])
			{
				tab[s1[i]] = 1;
				ft_putchar(s1[i]);
				i++;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}
