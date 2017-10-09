/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:36:15 by svilau            #+#    #+#             */
/*   Updated: 2016/01/12 21:24:01 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *add_link(t_list *list, char *str);

int		main(void)
{
	t_list *list;

	list = NULL;
	list = add_link(list, "tutu");
	printf("%s\n", list->data);
	printf("%s\n", ft_list_at(list, 1)->data);
	
	return (0);
}
