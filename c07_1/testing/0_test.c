#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}	
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*str;
	int	l;

	i = 0;
	l = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (l++));
	while (i < l)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc > 1)
	{
		ptr = ft_strdup(argv[1]);
		ft_putstr(ptr);
		ft_putchar('\n');
		free(ptr);
	}
	return (0);
}
