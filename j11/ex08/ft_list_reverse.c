/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 22:25:09 by svilau            #+#    #+#             */
/*   Updated: 2016/01/05 11:37:45 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*val;
	t_list	*next;

	if (*begin_list)
	{
		val = *begin_list;
		next = (*begin_list)->next;
		(*begin_list)->next = NULL;
		while (next != NULL)
		{
			(*begin_list) = next;
			next = (*begin_list)->next;
			(*begin_list)->next = val;
			val = (*begin_list);
		}
	}
}
