/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:56:20 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/18 10:32:47 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	len = (max - min);
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (len));
	if (tab == NULL)
		return (-1);
	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (len);
}
