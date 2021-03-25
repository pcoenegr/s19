/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:20:03 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/25 14:24:43 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	x;

	x = 0;
	if (min >= max)
		return (-1);
	if ((arr = (int *)malloc(sizeof(int) * (max - min))) == ((void *)0))
		return (-1);
	while (min < max)
	{
		arr[x] = min;
		min++;
		x++;
	}
	*range = arr;
	return (x);
}
