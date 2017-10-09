/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 16:10:53 by svilau            #+#    #+#             */
/*   Updated: 2015/10/25 14:07:31 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int nr;

	i = 1;
	nr = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (i <= nb)
		{
			nr *= i;
			i++;
		}
		return (nr);
	}
	else
	{
		return (0);
	}
}
