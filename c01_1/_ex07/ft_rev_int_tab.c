void	ft_rev_int_tab(int *tab, int size)
{
	int 	i;
	char 	f;

	i = -1;
	while (++ i <--size)
	{
		f = tab[i];
		tab[i] = tab[size];
		tab[size] = f;
	}
}
