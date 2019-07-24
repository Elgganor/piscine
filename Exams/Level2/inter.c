#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_char(char *str, char c, int index)
{
	int	i;
	
	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s2[len] != '\0')
		len++;
	while (s1[i] != '\0')
	{
		if (check_char(s1, s1[i], i) == 1)
		{
			if (check_char(s2, s1[i], len) == 0)
			{
				ft_putchar(s1[i]);
			}
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}
