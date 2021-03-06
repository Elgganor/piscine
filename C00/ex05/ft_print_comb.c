/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 15:14:06 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/04 18:56:14 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u++ <= '9')
			{
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u - 1);
				if (!(c == '7' && d == '8' && (u - 1) == '9'))
				{
					write(1, ", ", 2);
				}
			}
			d++;
		}
		c++;
	}
}
