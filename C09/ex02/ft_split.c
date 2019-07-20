/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:24:37 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/20 16:44:58 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		count_words(char *str, char *sep)
{
	int	cnt;
	int	i;
	int	j;

	j = 0;
	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == sep[j])
		{
			if (sep[j + 1] == '\0')
			{
				i++;
				j = -1;
				cnt++;
			}
			j++;
		}
		i++;
	}
	return (cnt + 1);
}

int	main(void)
{
	char *str = "Foo  Bar Baz";
	char *sep = " ";

	printf("%d\n", count_words(str, sep));
	return (0);
}
