/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:00:55 by svilau            #+#    #+#             */
/*   Updated: 2016/01/06 11:48:11 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	main(void)
{
	t_list *list;
	t_list *x;

	list = ft_create_elem("a");
	x = list;
	ft_list_push_back(&list, "b");
	printf("ADDED VAL: %s", x->next->data);
	return (0);
}
