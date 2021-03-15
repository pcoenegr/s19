#include <unistd.h>

void	ft_putchar(char c)
{
	write (1 , &c, 1);
}

void 	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str ++;
	}
}

int	main(void)
{
	char	p[] = "shalalaalaaalaa\n";

	ft_putstr(p);
	return (0);
}
