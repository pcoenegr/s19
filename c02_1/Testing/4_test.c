
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'a' && c <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

int 	main(void)
{
	char	r[] = "fuck";

    	if (( ft_str_is_lowercase (r)) == 1 )
		ft_putstr ("this(this means value is 1)\n");
	else
		ft_putstr ("PoopieFace(value 0)\n");
	return ( 0 );
}
