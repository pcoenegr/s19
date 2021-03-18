#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	x;

	x = 1;
	while (argc >= (x + 1))
	{
		if(argc)
		ft_putstr(argv[x]);
		ft_putchar('\n');
		x++;
	}
}
