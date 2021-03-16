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

int		ft_space(char p)
{	
	if (p == ' ' || p == '	' || p  == '\n' || p  == '\r' || p  == '\f'
			|| p  == '\t' || p  == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int x;
	int tot;
	int neg;

	x = 0;
	neg = 0 ;
	tot = 0 ;
	while (ft_space(str[x]))
		x++;
	if (str[x] == '-')
	{
		neg = 1;
	}
	while ((str[x] == '-') || (str[x] == '+'))
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{	
		tot *= 10;
		tot += (str[x] - '0');
		x++;
	}
	if (neg == 1)
		return (-tot);
	else
		return (tot);
}

int	main(void)
{
	char a[] = " \f\r\t ++-5555534AZZZhrsdsaadth";
	printf("%d\n",ft_atoi(a));
}

