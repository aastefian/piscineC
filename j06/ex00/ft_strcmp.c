/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 10:24:12 by svilau            #+#    #+#             */
/*   Updated: 2015/10/26 14:38:14 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
		i++;
	}
	return (0);
}
