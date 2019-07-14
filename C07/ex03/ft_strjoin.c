/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 16:56:57 by mohamed           #+#    #+#             */
/*   Updated: 2019/07/14 19:26:17 by mohamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
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

int	ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat;
	int	cat_len;
	int	i;

	i = 0;
	cat_len = 0;
	while (i < size)
	{
		cat_len += ft_strlen(*strs[i]);
		i++;
	}
	//cat = malloc(sizeof(*cat) * cat_len);
	return (cat_len);
}

#include <stdio.h>
int	main(void)
{
	char **strs = {"Hello World", "Test", "Salut"};

	printf("%d\n", ft_strjoin(3, strs, " "));
}
