/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyolee <kyolee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:45:08 by kyolee            #+#    #+#             */
/*   Updated: 2020/07/22 19:13:24 by kyolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			ft_stlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int			ft_strlen(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_stlen(strs[i]);
		i++;
	}
	len = len + (ft_stlen(sep) * (size - 1));
	return (len);
}

int			ft_strcat(char *dest, char *src, int num)
{
	int		j;

	j = 0;
	while (src[j] != 0)
	{
		dest[num] = src[j];
		num++;
		j++;
	}
	return (num);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	int		num;
	char	*all_strs;

	if (size == 0)
	{
		all_strs = (char *)malloc(sizeof(char) * 1);
		all_strs[0] = 0;
		return (all_strs);
	}
	i = 0;
	num = 0;
	len = ft_strlen(size, strs, sep);
	all_strs = (char *)malloc(sizeof(char) * (len + 1));
	while (i < size)
	{
		num = ft_strcat(all_strs, strs[i], num);
		if (i !=size - 1)
			num = ft_strcat(all_strs, sep, num);
		i++;
	}
	all_strs[len] = 0;
	return (all_strs);
}
