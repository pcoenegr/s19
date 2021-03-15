#define ft_putchar putchar

#include <stdio.h>
#include "ft_swap.c"

int	main(void)
{
	int one = 1;
	int two = 2;
	int *a = &one;
	int *b = &two;

	printf("Before :\n");
	printf("a: %d\n", *a);
	printf("b: %d\n", *b);
	ft_swap(a, b);
	printf("After :\n");
	printf("a: %d\n", *a);
	printf("b: %d\n", *b);
	return (0);
}
