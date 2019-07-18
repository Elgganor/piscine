/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:53:05 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/14 11:07:28 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len++])
		;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*cpy;
	int		bcl;

	len = ft_strlen(src);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	bcl = 0;
	while (src[bcl])
	{
		cpy[bcl] = src[bcl];
		bcl++;
	}
	cpy[bcl] = '\0';
	return (cpy);
}
