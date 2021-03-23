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

char 	*ft_strncat(char *dest, char *src, int nb)
{
	int 	i;
	int 	l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while (src [i] && i < nb)
	{
		dest[l] = src[i];
		l ++;
		i ++;
	}
	dest [l] = '\0';
	return (dest);
}

int  	main(void)
{
	char 	r[] = {"Fuck This\n"};
	char 	t[20] = {"Code?\n"};

	ft_strncat (t, r, 10);
	ft_putstr (t);
	return (0);
}
