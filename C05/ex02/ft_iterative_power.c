/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:02:06 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/14 15:04:21 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ <= power)
	{
		res = res * nb;
	}
	if (res > 2147483647)
		return (0);
	return (res);
}
