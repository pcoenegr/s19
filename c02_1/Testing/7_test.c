#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int     i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

char	*ft_strupcase(char *str)
{
	int     i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = ((str[i] - 'a') + 'A');
		i++;
	}
	return (str);
}

int	main(void)
{
	char    r[] = {"Fuck This\n"};

	ft_putstr(ft_strupcase(r));
	return (0);
}
