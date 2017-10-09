/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 10:45:56 by svilau            #+#    #+#             */
/*   Updated: 2016/01/14 21:24:16 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *next_list;
	while(begin_list != NULL)
	{
		if(begin_list->next) {
			next_list = begin_list->next->next;
			begin_list->next->next = begin_list;
			begin_list = begin_list->next;
		}
	}
	begin_list = next_list;
}
