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

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];	
	return (dest);
}

int 	main(void)
{
	char	r[] = {"Fuc\n"};
	char	t[6];	
	char	*p;	

	p = ft_strcpy(t, r);
	ft_putstr(p);
	return (0);
}
