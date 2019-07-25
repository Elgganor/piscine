#include <unistd.h>

int		is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && is_space(str[i]) == 1)
		i++;
	while (str[i] != '\0')
	{
		while (is_space(str[i]) == 0)
		{
			write(1, &str[i], 1);
			i++;
		}
		while (is_space(str[i]) == 1)
		{
			i++;
		}
		write(1, " ", 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		epur_str(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
