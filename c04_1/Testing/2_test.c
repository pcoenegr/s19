#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    unsigned int n;
    
    n = nb;
    if (nb < 0)
    {
        n = -nb;
        ft_putchar('-');
    }
    if (n < 10)
        ft_putchar(n + '0');
    if (n == '0')
        ft_putchar('0');
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

int	main(void)
{

    ft_putnbr(-2147483648);
	return (0);
}
