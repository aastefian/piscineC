/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:38:40 by svilau            #+#    #+#             */
/*   Updated: 2015/12/08 15:54:56 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int n;

	n = 0;
	while (begin_list)
	{
		n += 1;
		begin_list = begin_list->next;
	}
	return (n);
}
