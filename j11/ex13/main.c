/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:36:15 by svilau            #+#    #+#             */
/*   Updated: 2016/01/07 17:53:01 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *add_link(t_list *list, char *str);

void	ft_putstr(char *str);


void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int	main(void)
{
	t_list *list;
	t_list *list2;
	t_list *x;

	list = NULL;
	list = add_link(list, "toto\n");
	x = list;
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");
	list2 = NULL;
	list2 = add_link(list2, "xxxx\n");
	list2 = add_link(list2, "yyyy\n");
	ft_list_merge(&list, list2);
	print_list(x);
	return (0);
}
