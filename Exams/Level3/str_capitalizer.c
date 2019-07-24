#include <unistd.h>

int		ft_isalpha(char c)
{
	if (('0' <= c && c <= '9') ||
			('a' <=c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if	(ft_isalpha(str[0]) == 1)
	{
		if ('a' <= str[0] && str[0] <= 'z')
			str[0] = str[0] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[i]) == 1)
		{
			if ('A' <= str[i] && str[i] <= 'Z')
				str[i] = str[i] + 32;
			if (ft_isalpha(str[i - 1]) == 0)
				if ('a' <= str[i] && str[i] <= 'z')
					str[i] -= 32;
		}
		i++;
	}
	return (str);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			ft_putstr(ft_strcapitalize(av[i++]));
			write(1, "\n", 1);
		}
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
