/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 16:56:57 by mohamed           #+#    #+#             */
/*   Updated: 2019/07/15 12:34:34 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;
	int	i;

	i = 0;
	dest_size = ft_strlen(dest);
	while (src[i] != '\0')
	{
		i = 0;
	}
	return (dest);
}

char	ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		len_sep;
	int		len_strs_p;

	dest = (char *)malloc(sizeof(char) * (size + ft_strlen(sep) + 1));
	while ()
	{
		
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char **strs;

	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "Test";
	printf("%d\n", ft_strlen(strs));
	printf("%lu\n", sizeof(strs));
}
