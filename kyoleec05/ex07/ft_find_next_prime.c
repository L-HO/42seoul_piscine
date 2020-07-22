/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyolee <kyolee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 06:38:34 by kyolee            #+#    #+#             */
/*   Updated: 2020/07/20 17:12:16 by kyolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb <= 0)
		return (0);
	while (i <= 46340 && i * i <= nb)
		i++;
	i--;
	return (i);
}

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb == 2 || nb < 2)
		return (2);
	if (nb % 2 == 0)
		nb += 1;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
