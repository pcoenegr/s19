/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:18:54 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/25 14:25:39 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	x;

	x = 0;
	if (min >= max)
		return ((void *)0);
	if ((arr = (int *)malloc(sizeof(*arr) * (max - min))) == ((void *)0))
		return ((void *)0);
	while (min < max)
	{
		arr[x] = min;
		min++;
		x++;
	}
	return (arr);
}
