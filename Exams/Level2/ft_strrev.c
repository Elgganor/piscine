char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[(len - 1) - i];
		str[len - 1 - i] = temp;
		i++;
	}
	return (str);
}
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_strrev(av[1]));
	}
	return (0);
}
