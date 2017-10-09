/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:00:55 by svilau            #+#    #+#             */
/*   Updated: 2016/01/14 19:59:09 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *add_link(t_list *list, void *data);

void	ft_putstr(char *str);

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int	main(int ac, char **av)
{
	t_list *list;

	list = NULL;

	if(ac > 1)
	{
		list = ft_list_push_params(ac, av);
	}
	print_list(list);
	return (0);
}
