
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	int r;

	r = ft_fibonacci(13);
	ft_putnbr(r);
	return (0);
}
