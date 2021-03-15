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
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ((str[i] - 'A') + 'a');
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = ((str[0] - 'a') + 'A');
	while (str[i])
	{
		if ((str[i] >= ' ' && str[i] <= '/') ||
			(str[i] >= ':' && str[i] <= '@'))
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = ((str[i + 1] - 'a') + 'A');
		i++;
	}
	return (str);
}

int	main(void)
{
	char    r[] = {"fuck this w13rd c0de !!\n"};

	ft_putstr(ft_strcapitalize(r));
	return (0);
}
