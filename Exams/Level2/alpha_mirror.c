#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	char ltr;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if ('a' <= av[1][i] && av[1][i] <= 'z')
			{
				ltr = 'z'- av[1][i] + 'a';
			}
			else if ('A' <= av[1][i] && av[1][i] <= 'Z')
			{
				ltr = 'Z' - av[1][i] + 'A';
			}
			else
			{
				ltr = av[1][i];
			}
			write(1, &ltr, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
