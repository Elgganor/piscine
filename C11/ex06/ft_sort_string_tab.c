/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:33:42 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/22 17:42:06 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;

	i = 1;
	while (tab[i - 1])
	{
		if (ft_strcmp(tab[i],tab[i + 1]) > 0)
		{
			ft_swap(&tab[i],&tab[i + 1]);
			i = 0;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char *tab[] = {"Test", "Salut", "Test","Salut"};
	int	i = 0;

	ft_sort_string_tab(tab);
	while (i < 4)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
