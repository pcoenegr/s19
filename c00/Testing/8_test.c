#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check(int x[], int n)
{
	int i;
	int p;

	i = 0;
	p = 1;
	while (i < n - 1)
	{
		if (!(x[i] < x[i + 1]))
			p = 0;
		i++;
	}
	if (p == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(x[i]);
			i++;
		}
		if (x[0] != '9' - n + 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_do(int x[], int k, int n)
{
	if (k == (n - 1))
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			if (n == 9 && x[0] > '1')
				break ;
			ft_check(x, n);
			x[k]++;
		}
	}
	else
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			ft_do(x, (k + 1), n);
			x[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int x[n];

	ft_do(x, 0, n);
}

int 	main(void)
{	
	ft_print_combn(8);

	return (0);
}
