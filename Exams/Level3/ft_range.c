#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int	len;
	int	i;

	i = 0;
	if (start <= end)
	{
		len = end - start + 1;
		if (!(tab = (int *)malloc(sizeof(int)* len)))
			return (0);
		while (i < len)
		{
			tab[i] = start + i;
			i++;
		}
	}
	else
	{
		len = start - end + 1;
		if (!(tab = (int *)malloc(sizeof(int) * len)))
			return (0);
		while (i < len)
		{
			tab[i] = start - i;
			i++;
		}
	}
	return (tab);
}
