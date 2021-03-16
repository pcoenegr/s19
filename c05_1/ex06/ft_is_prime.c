int	ft_is_prime(int nb)
{
	int x;

	if (nb < 2)
		return (0);
	x = 2;
	while (x <= (nb / 2))
	{
		if ((nb % x) == 0)
			return (0);
		x++;
	}
	return (1);
}
