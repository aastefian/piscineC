/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 07:03:45 by svilau            #+#    #+#             */
/*   Updated: 2015/10/22 13:15:13 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int verite;

	verite = 0;
	while (((verite * verite) < nb) && (verite <= 46340))
	{
		verite++;
		if ((verite * verite) == nb)
			return (verite);
	}
	return (0);
}
