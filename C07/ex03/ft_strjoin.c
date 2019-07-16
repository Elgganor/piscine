/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:28:34 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/16 18:30:40 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_concat(char **strs, char *str, char *sep, int size)
{
	int	i;
	int	k;
	int	j;

	j = 0;
	i = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
		{
			str[j++] = strs[i][k++];
		}
		k = 0;
		while (sep[k] && i < size - 1)
		{
			str[j++] = sep[k++];
		}
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;
	int		k;

	len = 0;
	i = 0;
	k = 0;
	if (size == 0)
	{
		str = (void *)0;
		return (str);
	}
	while (i < size)
		k = k + ft_strlen(strs[i++]);
	len = k + (ft_strlen(sep) * (size - 1));
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (0);
	str = ft_concat(strs, str, sep, size);
	return (str);
}
