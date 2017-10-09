/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 17:32:35 by svilau            #+#    #+#             */
/*   Updated: 2015/10/21 18:35:42 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int num;

	num = 1;
	if (power >= 0)
	{
		while (power)
		{
			num *= nb;
			power--;
		}
		return (num);
	}
	else
		return (0);
}
