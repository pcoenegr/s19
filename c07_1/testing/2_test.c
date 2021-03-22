#include <unistd.h>
#include <stdlib.h>

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

void	ft_array(int *nb, int l)
{
	while (l-- > 0)
	{
		ft_putnbr(*nb + 1);
		ft_putchar(' ');
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	x;

	x = 0;
	if (min >= max)
		return (-1);
	if((arr = (int *)malloc(sizeof(int)*(max - min))) == ((void *)0))
		return (-1);
	while	(min < max)
	{
		arr[x] = min;
		min++;
		x++;
	}
	*range = arr;
	return (x);
}

int	main(void)
{
	int	*arr;

	ft_array(arr, ft_ultimate_range(&arr, 9, 8));
	ft_putchar ('\n');
	return (0);
}
