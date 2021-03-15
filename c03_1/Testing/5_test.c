#include <unistd.h>

void 	ft_putchar(char c)	
{
	write(1 , & c, 1);
}

void 	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i ++;
	write ( 1, str, i);
}


char	*ft_strlcat(char *dest, char *src, int size)
{
		int	i;
		int	l;

		i = 0;
		l = 0;
		while (dest[l])
				l++;
		while (src[i] && (l < (size - 1)))
		{
				dest[l] = src[i];
				l++;
				i++;
		}
		dest[l] = '\0';
		return (dest);
}

int  	main(void)
{
	char 	r[] = {"Fuck This\n"};
	char 	t[] = {"Code?\n"};

	ft_strlcat (t, r, 20);
	ft_putstr (t);
	return (0);
}
