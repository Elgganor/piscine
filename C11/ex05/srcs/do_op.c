/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:44:10 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/25 10:55:18 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	do_op(int a, char *c, int b, int (*f[])(int, int))
{
	if (c[0] == '+')
		ft_putnbr((*f[0])(a, b));
	else if (c[0] == '-')
		ft_putnbr((*f[1])(a, b));
	else if (c[0] == '*')
		ft_putnbr((*f[2])(a, b));
	else if (c[0] == '/')
	{
		if (b == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr((*f[3])(a, b));
	}
	else if (c[0] == '%')
	{
		if (b == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr((*f[4])(a, b));
	}
	else
		ft_putnbr(0);
}
