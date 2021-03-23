/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:20:20 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/23 11:56:34 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_space(char p)
{
	if (p == ' ' || p == '\n' || p == '\r' || p == '\f'
			|| p == '\t' || p == '\v')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		x;
	int		tot;
	int		neg;

	x = 0;
	neg = 0;
	tot = 0;
	while (ft_space(str[x]))
		x++;
	if (str[x] == '-')
	{
		neg = 1;
	}
	while ((str[x] == '-') || (str[x] == '+'))
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		tot *= 10;
		tot += (str[x] - '0');
		x++;
	}
	if (neg == 1)
		return (-tot);
	else
		return (tot);
}
