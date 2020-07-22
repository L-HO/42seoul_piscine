/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyolee <kyoelee@student.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:53:56 by kyolee            #+#    #+#             */
/*   Updated: 2020/07/20 16:39:15 by kyolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		if (nb * result < 1)
			return (0);
		result *= nb;
		nb--;
	}
	return (result);
}
