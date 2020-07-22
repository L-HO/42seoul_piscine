/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyolee <kyolee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:42:35 by kyolee            #+#    #+#             */
/*   Updated: 2020/07/22 18:44:47 by kyolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;
	
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min - 1;
	if ((*range = (int *)malloc((len + 1) * sizeof(int))) == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i <= len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len + 1);
}
