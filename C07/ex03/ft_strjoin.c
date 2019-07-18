/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:28:34 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/18 11:59:26 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
		i++;
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
	int		size2;

	len = 0;
	i = 0;
	k = 0;
	size2 = 0;
	if (strs == NULL)
		return (0);
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	while (i < size && strs[i] != NULL)
	{	
		k = k + ft_strlen(strs[i++]);
		size2++;
	}
	len = k + (ft_strlen(sep) * (size2 - 1));
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	str = ft_concat(strs, str, sep, size2);
	return (str);
}
