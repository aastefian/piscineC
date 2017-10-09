/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 18:18:44 by svilau            #+#    #+#             */
/*   Updated: 2015/10/21 19:33:42 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int num;

	num = 1;
	if (power < 0)
		return (0);
	if (power > 0)
	{
		num *= nb * ft_recursive_power(nb, power - 1);
	}
	return (num);
}
