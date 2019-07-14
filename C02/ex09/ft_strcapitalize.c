/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 16:34:36 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/09 19:46:00 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char str)
{
	if ('a' <= str && str <= 'z')
		return (1);
	else if ('A' <= str && str <= 'Z')
		return (1);
	else if ('0' <= str && str <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	ptr = str;
	if (ft_is_alpha(*str))
	{
		if (('a' <= *str && *str <= 'z'))
			*str -= ('a' - 'A');
	}
	while (*str++)
	{
		if (ft_is_alpha(*str) == 1)
		{
			if ('A' <= *str && *str <= 'Z')
				*str += ('a' - 'A');
			if (!ft_is_alpha(*(str - 1)))
			{
				if ('a' <= *str && *str <= 'z')
					*str -= ('a' - 'A');
			}
		}
	}
	return (ptr);
}
