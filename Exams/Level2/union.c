#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		char_isvalid(char c, char *str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if	(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	len;

	i = 0;
	while (s1[i] != '\0')
	{
		if (char_isvalid(s1[i], s1, i) == 1)
			ft_putchar(s1[i]);
		i++;
	}
	len  = i;
	i = 0;
	while (s2[i] != '\0')
	{
		if (char_isvalid(s2[i], s2, i) == 1)
			if (char_isvalid(s2[i], s1, len) == 1)
				ft_putchar(s2[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1 , "\n", 1);
	return (0);
}
