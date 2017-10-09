/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 22:25:09 by svilau            #+#    #+#             */
/*   Updated: 2016/01/04 23:39:26 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *val;
   	t_list *next;	
	t_list *list;

	list = *begin_list;
	val = list;
	next = list->next;
	list->next = NULL;
	while (next != NULL)
	{  
		list = next;
		next = list->next;
		list->next = val;
		printf("Previous: %s\n", list->next->data);
		printf("Current:%s\n", list->data);
		val = list;
	}
}
