/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 18:03:08 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/11 20:29:23 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i - 1;
		while (j <= 99)
		{
			ft_putchar((i) / 10 + '0');
			ft_putchar((i) % 10 + '0');
			ft_putchar(' ');
			ft_putchar((j) / 10 + '0');
			ft_putchar((j) % 10 + '0');
			if (!((i) == 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
