/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 12:15:42 by svilau            #+#    #+#             */
/*   Updated: 2016/01/12 23:58:09 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *previous;
	t_list *head;

	head = *begin_list;
	previous = *begin_list;
	while ((*begin_list) != NULL)
	{
		if ((*cmp)((*begin_list)->data, data_ref) == 0)
		{
			previous->next = (*begin_list)->next;
			free((*begin_list));
		}
		else
		{
			previous = (*begin_list);
		}
		(*begin_list) = previous->next;
	}
	*begin_list = head;
}
