
#include <stdio.h>
#include "ft_ft.c"

int	main(void)
{
	int i = 0;
	int *ptr = &i;

	ft_ft(ptr);
	printf("%d\n", i);
	return (0);
}
