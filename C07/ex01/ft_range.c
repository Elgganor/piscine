/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:08:17 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/14 11:53:39 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	cnt;

	cnt = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return (0);
	while (cnt < max - min)
	{
		tab[cnt] = min + cnt;
		cnt++;
	}
	return (tab);
}
