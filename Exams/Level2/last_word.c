#include <unistd.h>

int		ft_is_printable(char c)
{
	if (33 <= c && c <= 126)
		return (1);
	return (0);
}

void	last_word(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			if (ft_is_printable(str[i + 1]) == 1)
			{
				j = i + 1;
			}
		}
		i++;
	}
	while (str[j] != '\0' && ft_is_printable(str[j]) == 1)
	{
		write(1, &str[j++], 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
