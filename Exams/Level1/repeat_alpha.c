/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:50:09 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/16 20:20:18 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		i = 0;
		while (av[1][i] != '\0')
		{
			j = 0;
			if (ft_is_lowercase(av[1][i]) == 1)
			{
				while (j <= av[1][i] - 'a')
				{
					ft_putchar(av[1][i]);
					j++;
				}
			}
			if (ft_is_uppercase(av[1][i]) == 1)
			{
				while (j <= av[1][i] - 'A')
				{
					ft_putchar(av[1][i]);
					j++;
				}
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
