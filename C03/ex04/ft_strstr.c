/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 07:33:40 by mohamed           #+#    #+#             */
/*   Updated: 2019/07/11 10:11:25 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len_tf;

	if (to_find[0] == '\0')
		return (str);
	len_tf = 0;
	while (to_find[len_tf] != '\0')
		len_tf++;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == len_tf)
				return (str + i);
		}
		i++;
	}
	return (0);
}
