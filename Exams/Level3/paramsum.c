#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[0] == '-')
	{
		write(1, "-", 1);
		i = 1;
	}
	while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9'))
	{	
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 1)
	{
		ft_putnbr(0);
		write(1, "\n", 1);
	}
	else
	{
		ft_putnbr(ac - 1);
	}
	return (0);
}
