void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;

	swp1 = *a;
	swp2 = *b;
	*a = swp1 / swp2;
	*b = swp1 % swp2;
}
