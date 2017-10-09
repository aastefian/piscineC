/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 17:02:37 by svilau            #+#    #+#             */
/*   Updated: 2016/01/14 20:24:48 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	t_list		*node;
	int			i;

	i = 1;
	list = NULL;
	if (ac > 1)
	{
		while (i <= ac - 1)
		{
			node = ft_create_elem(av[i]);
			node->next = list;
			list = node;
			i++;
		}
	}
		return (list);
	}
