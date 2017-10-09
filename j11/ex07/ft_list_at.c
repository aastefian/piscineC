/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:12:52 by svilau            #+#    #+#             */
/*   Updated: 2016/01/12 21:21:40 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*list;
	unsigned int		i;

	i = 0;
	list = begin_list;
	if (!begin_list)
		return (0);
	while (list)
	{
		if (i == nbr)
			return (list);
		list = list->next;
		i++;
	}
	return (0);
}
