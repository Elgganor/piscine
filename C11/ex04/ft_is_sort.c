/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 08:41:43 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/24 09:31:05 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ordre;

	i = 0;
	if (length == 0)
		return (0);
	else if (length == 1)
		return (1);
	while (i < (length - 1) && (*f)(tab[i], tab[i + 1]) == 0)
		i++;
	if (i < (length - 1) && (*f)(tab[i], tab[i + 1]) > 0)
		ordre = -1;
	else if (i < (length - 1) && (*f)(tab[i], tab[i + 1]) < 0)
		ordre = 1;
	i++;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0 && ordre == 1)
			return (0);
		else if ((*f)(tab[i], tab[i + 1]) < 0 && ordre == -1)
			return (0);
		i++;
	}
	return (1);
}
