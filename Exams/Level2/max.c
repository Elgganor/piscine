int	max(int *tab, unsigned int len)
{
	int	i;
	int	m;

	m = tab[0];
	i = 0;
	while (i < len)
	{
		if (tab[i] > m)
			m = tab[i];
		i++;
	}
	return (i);
}
