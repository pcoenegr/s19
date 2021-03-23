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

char 	*ft_strcat(char *dest, char *src)
{
	int 	i;
	int 	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src [i])
	{
		dest[dest_size = src[i]];
		dest_size ++;
		i ++;
	}
	dest [dest_size] = '\0';
	return (dest);
}

int  	main(void)
{
	char 	r[] = {"Fuck This\n"};
	char 	t[20] = {"Code\n"};

	ft_strcat (t, r);
	ft_putstr (t);
	return (0);
}
