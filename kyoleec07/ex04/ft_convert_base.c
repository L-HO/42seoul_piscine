/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyolee <kyolee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 19:13:56 by kyolee            #+#    #+#             */
/*   Updated: 2020/07/22 19:17:41 by kyolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			base_to_num(char *nbr, char *base_from, int len, int m);
void		num_to_base(int val, char *base_to, char *convert_nbr, int i);
int			base_check(char *base);

int			ft_strlen(char *str)
{
