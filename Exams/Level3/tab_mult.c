#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int	atoi(char *str)
{
	int i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	if (str[0] == '-')
		sign = -1;
	while (str[i] && ('0' <= str[i] && str[i] <= '9'))
	{
		res = res * 10 + (str[i++] - '0');
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	int	mult;
	int	i;

	i = 1;
	if (ac == 2)
	{
		mult = atoi(av[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(mult);
			ft_putstr(" = ");
			ft_putnbr(i * mult);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
