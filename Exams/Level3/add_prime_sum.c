#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	sign = 1;
	i = 0;
	nb = 0;
	if (str[0] == '-')
	{	
		sign = -1;
		i++;
	}
	while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i <= nb / 2 && i < 46340)
	{	
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	if (ac == 2)
	{
		while (i <= ft_atoi(av[1]))
		{
			if (ft_is_prime(i) == 1)
				res += i;
			i++;
		}
		ft_putnbr(res);
	}
	ft_putchar('\n');
	return (0);
}
