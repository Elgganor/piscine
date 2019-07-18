#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_stdrup(char *src);
void	ft_swap(int *a, int *b);
#endif
