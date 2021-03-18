#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (++i < n && src[i] != '\0')
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int 	main(void)
{
	char src[] = "pipi";
	char dest[] = "poop";

	printf("src = %s // dest = %s\n", src, dest);
	strncpy(&dest[0], &src[0], 5);
	printf("src = %s // dest = %s \n", src, dest);
	return 0;
} 
