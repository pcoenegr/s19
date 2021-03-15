#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && (i < (size - 1)))

	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int		main(void)
{
	char	r[] = {"FuckThisWeirdCode\n"};
	char	t[19];

	ft_strlcpy(t, r, 19);
	ft_putstr(t);
	return (0);
}
