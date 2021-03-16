#include <stdio.h>
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
	int i;

	i = ft_fibonacci(10);
	ft_putnbr(i);
	return (0);
}

/*
 -----------------------------------------
 0    1    1    2    3    5
 0    1    2    3    4    5
 -----------------------------------------
 8    13    21    34    55    89
 6    7     8     9     10    11
 ------------------------------------------
 */
