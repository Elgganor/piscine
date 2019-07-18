#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

#include <stdio.h>
#include <stdlib.h>
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;
int	ft_strlen(char *str);
char	*ft_strdup(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_show_tab(struct s_stock_str *par);
#endif
