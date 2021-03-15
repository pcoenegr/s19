
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

int	ft_str_is_uppercase(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'A' && c <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int 	main(void)
{
	char	r[] = "FUCK";

    	if (( ft_str_is_uppercase (r)) == 1 )
		ft_putstr ("this(this means value is 1)\n");
	else
		ft_putstr ("PoopieFace(value 0)\n");
	return ( 0 );
}
