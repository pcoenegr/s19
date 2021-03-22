/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:24:41 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/16 10:24:55 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}	
}

int	ft_input(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}


char	ft_low(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}
char	ft_capital(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i])
	{
		if (ft_low(str[i]) && (x == 1))
			str[i] = ((str[i] - 'a') + 'A');
		else if (ft_capital(str[i]) && (x == 0))
			str[i] = ((str[i] - 'A') + 'a');
		if (ft_input(str[i]))
			x = 0;
		else
			x = 1;
		i++;
	}
	return (str);
}

int 	main(void)
{
	char	r[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n"};

	ft_putstr(ft_strcapitalize(r));
	return (0);
}
