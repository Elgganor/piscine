#include "ft_point.h"
#include <stdio.h>
void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;
	
	point.x = 38;
	point.y = 56;
	printf("Avant ma fonction: x = %d et y = %d\n", point.x, point.y);
	set_point(&point);
	printf("Apres ma fonction: x = %d et y = %d\n", point.x, point.y);
	return (0);
}
