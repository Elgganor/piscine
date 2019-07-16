/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:28:51 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/16 20:50:14 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		int	i;

		i = 0;
		while (av[1][i] != '\0')
		{
			if (ft_is_lowercase(av[1][i]) == 1)
			{
				if (av[1][i] != 'z')
					ft_putchar(av[1][i] + 1);
				else
					ft_putchar('a');
			}
			else if (ft_is_uppercase(av[1][i]) == 1)
			{
				if (av[1][i] != 'Z')
					ft_putchar(av[1][i] + 1);
				else
					ft_putchar('A');
			}
			else
			{
				ft_putchar(av[1][i]);
			}
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
