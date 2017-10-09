/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 14:56:15 by svilau            #+#    #+#             */
/*   Updated: 2015/10/25 13:56:29 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb <= 0 || nb == 1)
		return (0);
	i = nb - 1;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int next_p;

	next_p = 0;
	while (next_p == 0)
	{
		if (ft_is_prime(nb) == 1 && nb != 0 && nb != 1)
			next_p = nb;
		else
			nb++;
	}
	return (next_p);
}
