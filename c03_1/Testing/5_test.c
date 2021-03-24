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


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
		int	i;
		unsigned int	l;

		i = 0;
		l = 0;
		while (dest[l] != '\0')
				l++;
		while (src[i] != '\0' && (l < (size - 1)))
		{
				dest[l] = src[i];
				l++;
				i++;
		}
		dest[l] = '\0';
		return (size);
}

int  	main(void)
{
	char 	r[] = {"This"};
	char 	t[] = {"Fuck"};

	ft_strlcat (t, r, 20);
	ft_putstr (t);
	return (0);
}
