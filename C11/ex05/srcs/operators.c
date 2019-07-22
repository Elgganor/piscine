/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:48:07 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/22 09:51:56 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mult(int a, int b)
{
	return (a * b);
}

int	div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

int	mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
