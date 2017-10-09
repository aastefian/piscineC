/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 14:50:03 by svilau            #+#    #+#             */
/*   Updated: 2016/01/20 10:12:19 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "../includes/ft_funct.h"
#include <errno.h>

int main(int ac,char **av)
{
	if(ac > 1)
	{
		int fd;
		int ret;
		char buff[30000];
		int i;

		i = 1;
		while(i <= ac - 1)
		{
			fd = open(av[i], O_RDONLY);
			if (fd == -1)
			{
			   if (errno == 2)
			   {	   
				write(2, "cat: ", 5);
				ft_putstr(av[i]);
				write(2, ": No such file or directory\n", 28);
			   }
			}
			else
			{
				ret = read(fd, buff, 30000);
				buff[ret] = '\0';
				ft_putstr(buff);
			}
			i++;
		}
	}
	else if(ac == 1)
		write(2, "File names missing.\n", 19);
	return (0);
}
