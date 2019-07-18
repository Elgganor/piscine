#include "ft_stock_str.h"

int	main(int ac, char **av)
{
	struct s_stock_str *par;

	par = ft_strs_to_tab(ac, av);
	ft_show_tab(par);
	return (0);
}
