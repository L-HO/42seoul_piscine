/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyolee <kyolee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:37:54 by kyolee            #+#    #+#             */
/*   Updated: 2020/07/22 18:42:09 by kyolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int range;
	int index;
	int *str;

	if (min >= max)
		return (0);
	range = max - min - 1;
	if ((str = malloc(range * sizeof(int))) == NULL)
		return (0);
	index = 0;
	while (index <+ range)
	{
		str[index] = min + index;
		index++;
	}
	return (str);
}
