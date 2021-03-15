
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
int	ft_iterative_factorial (int nb)
{
	int i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0 )
	{
		i *= nb;
		nb--;
	}
	return (i);
}
int	main(void) 
{
	int r;

	r = ft_iterative_factorial(0);

	ft_putnbr(r);

	return (0);
}
