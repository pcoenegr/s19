#include <unistd.h>

void	ft_putchar(char c)
{
	write (1 , &c, 1);
}

void 	ft_putnbr(int nb)
{
	if (nb < 0 )
	{
		nb = -nb;
		ft_putchar ('-');
	}
	if (nb < 10)
		ft_putchar (nb + '0');
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}

int		ft_is_prime(int nb)
{
	int	x;
	
	if (x == 0 || x == 1)
		return (0);
	if (x == 2)
		return (1);
	if (x /= 2)
		return (0);
	else 
		return (1);
}

int main()
{
	int r;
	r = ft_is_prime(2);
	ft_putnbr (nb);
}
