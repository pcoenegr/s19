#include <stdio.h>
#include "ft_strlen.c"

int main(void)
{
	int buh;
	char *str = "notsix";
	buh = ft_strlen(str);
	printf("%d\n", buh);
	return 0;
}
