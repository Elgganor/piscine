#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);
char *ft_concat(char **strs, char *str, char *sep, int size);
char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int ac, char **av)
{
	char *strs = {"Hello", "World", NULL};
	char *sep;
	char *dest;

	sep = ", ";
	dest = ft_strjoin(ac, av, sep);

	printf("%s\n", dest);
	return (0);
}
