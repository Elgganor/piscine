#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_intcmp(int a, int b)
{
	if (a > b)
		return (1);
	else if (a < b)
		return (-1);
	return (0);
}

int	main(void)
{
	int	tab[] = {1, 2, 2, 4, 5, 6, 15};
	int	tab2[] = {15, 6, 5, 4, 2, 2, 1};
	int	tab3[] = {15, 15, 15, 15, 15};
	int	tab4[] = {4, 15, 7, 5, 6};

	printf("tab => %d\n", ft_is_sort(tab, 7, &ft_intcmp));
	printf("tab2 => %d\n", ft_is_sort(tab2, 7, &ft_intcmp));
	printf("tab3 => %d\n", ft_is_sort(tab3, 5, &ft_intcmp));
	printf("tab4 => %d\n", ft_is_sort(tab4, 5, &ft_intcmp));
}
