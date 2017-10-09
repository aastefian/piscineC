/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:56:40 by svilau            #+#    #+#             */
/*   Updated: 2015/12/14 16:08:35 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void    ft_list_clear(t_list **begin_list)
{
	t_list *x;
	t_list *list;

	list = *begin_list;
	while (list != NULL)
	{
		x = list->next;
		free(list);
		list = x;
	}
	*begin_list = NULL;
}
