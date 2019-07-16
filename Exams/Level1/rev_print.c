/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:21:31 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/16 20:26:52 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		int	len;
		int	i;

		len = ft_strlen(av[1]);
		i = len - 1;
		while (i >= 0)
		{
			ft_putchar(av[1][i--]);
		}
		ft_putchar('\n');
	}
	return (0);
}
