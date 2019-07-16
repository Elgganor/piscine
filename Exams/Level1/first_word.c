/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:44:35 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/16 19:48:58 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'z')
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_is_word(char c)
{
	if (c == ' ' || c == '\t')
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		if (ft_is_word(av[1][0]) == 1)
		{
			while (ft_is_word(av[1][i]) == 1 && av[1][i] != '\0') 
			{
				ft_putchar(av[1][i++]);
			}
			ft_putchar('\n');
		}
		else
		{
			while (ft_is_word(av[1][i]) == 0 && av[1][i] != '\0')
			{
				i++;
			}
			while (ft_is_word(av[1][i]) == 1 && av[1][i] != '\0')
			{
				ft_putchar(av[1][i++]);
			}
			ft_putchar('\n');
		}
	}
	return (0);
}
