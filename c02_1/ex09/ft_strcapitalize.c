/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:24:41 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/23 08:44:35 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int		ft_input(char c)
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
