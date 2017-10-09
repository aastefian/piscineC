/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:36:15 by svilau            #+#    #+#             */
/*   Updated: 2016/01/12 21:52:15 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *add_link(t_list *list, char *str);

void	ft_putstr(char *str);

void    print_list(char *data)
{
		ft_putstr(data);
}

int		main(void)
	{
		t_list *list;
		void (*f)(char*);

		f =  &print_list;
		list = NULL;
		list = add_link(list, "toto\n");
		list = add_link(list, "tata\n");
		list = add_link(list, "tutu\n");
		ft_list_foreach(&list, f);
		return (0);
	}
