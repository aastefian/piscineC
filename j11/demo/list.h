/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:43:02 by svilau            #+#    #+#             */
/*   Updated: 2015/12/07 17:50:30 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __list_h__
# define __list_h__

typedef struct s_list t_list;
struct s_list
{
	char *str;
	t_list *next;
};

t_list *add_link(t_list *list, char *str);
void	print_list(t_list *list);

void	ft_putstr(char *str);

#endif
