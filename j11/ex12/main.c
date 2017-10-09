/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:36:15 by svilau            #+#    #+#             */
/*   Updated: 2016/01/12 23:56:52 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *add_link(t_list *list, char *str);

void	ft_putstr(char *str);

int		ft_strcmp(char *s1, char *s2);

int		main(void)
	{
		t_list *list;
		t_list *x;
		int (*f)(char*, char*);

		f =  &ft_strcmp;
		list = NULL;
		list = add_link(list, "toto\n");
		list = add_link(list, "tata\n");
		list = add_link(list, "tutu\n");
		x = list;
		ft_list_remove_if(&list, "tata", f);
		printf("%s", x->next->data);
		return (0);
	}
