/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:24:37 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/21 14:58:13 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		count_word(char *str, char *charset)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (*str)
	{
		while (is_charset(*str, charset) == 1)
			str++;
		if (*str && is_charset(*str, charset) == 0)
		{
			cnt++;
			while (*str && is_charset(*str, charset) == 0)
				str++;
		}
	}
	return (cnt);
}

char	*malloc_word(char *str, char *charset)
{
	int		len;
	char	*tab_char;
	int		i;

	len = 0;
	i = 0;
	while (str[i] != '\0' && is_charset(str[i], charset) == 0)
	{
		len++;
		i++;
	}
	i = 0;
	if (!(tab_char = (char *)malloc(sizeof(char) * (len + 1))))
	{
		return (0);
	}
	while(str[i] != '\0' && is_charset(str[i], charset) == 0)
	{
		tab_char[i] = str[i];
		i++;
	}
	tab_char[i] = '\0';
	return(tab_char);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		wrds;

	i = 0;
	j = 0;
	wrds = count_word(str, charset);
	if (!(tab = (char **)malloc(sizeof(char *) * (wrds + 1))))
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] && is_charset(str[i], charset) == 1)
			i++;
		if (str[i] && is_charset(str[i], charset) == 0)
		{
			tab[j] = malloc_word(&str[i], charset);
			i++;
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}

int	main(int ac, char **av)
{
	int	i;
	char **tab;

	i = 0;
	if (ac == 3)
	{
		tab = ft_split(av[1], av[2]);
		while (i < count_word(av[1], av[2]))
		{
			printf("%s\n", tab[i]);
			i++;
		}
	}
	return  (0);
}
