/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:46:53 by svilau            #+#    #+#             */
/*   Updated: 2015/12/07 17:30:40 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->str);
		list = list->next;
	}
}
