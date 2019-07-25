#include <unistd.h>

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
			if (str[i + 1] != ' ' && str[i] != '\t')
			{
				j = i + 1;
			}
		}
		i++;
		while (str[j] != ' ' && str[j] != '\t')
		{
			write(1, &str[j], 1);
			j++;
		}
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
