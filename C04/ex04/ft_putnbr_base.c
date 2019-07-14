/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 11:37:30 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/11 16:58:15 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || 126 < base[i])
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_b;
	int	i;
	int	tab[100];

	if (check_base(base))
	{
		if (nbr == 0)
			ft_putchar('0');
		len_b = 0;
		while (base[len_b])
			len_b++;
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		i = 0;
		while (nbr)
		{
			tab[i++] = nbr % len_b;
			nbr = nbr / len_b;
		}
		while (--i >= 0)
			ft_putchar(base[tab[i]]);
	}
}
