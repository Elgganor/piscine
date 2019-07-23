/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:37:51 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/23 17:05:21 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int ac, char **av)
{
	int a;
	int b;
	int	(*op[5])(int a, int b);

	op[0] = sum;
	op[1] = sub;
	op[2] = mult;
	op[3] = div;
	op[4] = mod;
	if (ac == 4)
	{
		a = ft_atoi(av[1]);
		b = ft_atoi(av[3]);
		do_op(a, av[2], b, &(*op));
	}
	write(1, "\n", 1);
	return (0);
}
