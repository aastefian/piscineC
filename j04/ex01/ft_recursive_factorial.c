/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 16:34:27 by svilau            #+#    #+#             */
/*   Updated: 2015/10/25 19:17:02 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb > 12 || nb < 0)
		return (0);
	else
	{
		if (nb > 1)
			nb *= ft_recursive_factorial(nb - 1);
		return (nb);
	}
}
