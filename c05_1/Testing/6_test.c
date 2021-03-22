#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i  = 0;
	while(*str)
	{	
		write(1, str++, 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
		ft_putchar (nb + '0');
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}	

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
int 	main(void)
{

	if (ft_is_prime(13))
		ft_putstr("issamario\n");
	else
		ft_putstr("issaluigi\n");
	return (0);
}
