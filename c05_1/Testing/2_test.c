
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
int	ft_iterative_power(int nb, int power)
{
	int	t;

	t = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		t *= nb;
	return (t);
}

int	main(void) 
{
	int r;

	r = ft_iterative_power(2, 4);

	ft_putnbr(r);

	return (0);
}
