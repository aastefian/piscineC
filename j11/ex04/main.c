/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:00:55 by svilau            #+#    #+#             */
/*   Updated: 2015/12/08 16:48:22 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *add_link(t_list *list, void *data);

void	print_list(t_list *list);

int	main(void)
{
	t_list *list;

	list = NULL;
	list = add_link(list, "x");
	list = add_link(list, "a");
	list = add_link(list, "c");
	printf("%s", ft_list_last(list)->data);
	return (0);
}
