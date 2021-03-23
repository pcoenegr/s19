#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb < 10)
        ft_putchar(nb + '0');
    if (nb == '0')
        ft_putchar('0');
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int	main(void)
{

	ft_putnbr(-0);
	return (0);
}
