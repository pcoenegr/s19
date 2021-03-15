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

char	*ft_strlowcase(char *str)
{
	int     i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = ((str[i] - 'A') + 'a');
		i++;
	}
	return (str);
}

int	main(void)
{
	char    r[] = {"Fuck This\n"};

	ft_putstr(ft_strlowcase(r));
	return (0);
}
