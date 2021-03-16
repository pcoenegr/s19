/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:43:35 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/16 12:44:18 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_power(int nb, int power)
{
	int	t;

	t = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		t *= nb;
	return (t);
}
