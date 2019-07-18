/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:07:40 by mrouabeh          #+#    #+#             */
/*   Updated: 2019/07/18 15:12:16 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

enum	e_bool {FALSE, TRUE};
typedef enum e_bool	t_bool;
# define EVEN(nbr) (nbr % 2) == 0 ? 0 : 1
# define EVEN_MSG  "I have an even number of arguents.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
#endif
