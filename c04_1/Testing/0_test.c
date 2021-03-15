#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	*p; 
	int	r;	
	p = "Crappy Code\n";
	r = ft_strlen(p);
	printf("%d\n", r);
	return (0);
}
