
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

int	ft_recursive_power(int nb, int power)
{
	int	t;

	t = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb *(ft_recursive_power(nb, power -1)));
}

int	main(void) 
{
	int r;

	r = ft_recursive_power(5, 2);

	ft_putnbr(r);

	return (0);
}
