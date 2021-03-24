#include <unistd.h>
#include <stdio.h>
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

char 	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int 	i;
	unsigned int 	l;

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
	char 	r[] = {"5+65+6a+65cas+cas+5cas+5cas+5cas"};
	char 	t[4] = {"sc?"};

    printf("%s", ft_strncat (t, r, 5) );
	return (0);
}
