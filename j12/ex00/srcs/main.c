/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 14:50:03 by svilau            #+#    #+#             */
/*   Updated: 2016/01/19 16:35:58 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "../includes/ft_funct.h"

int main(int ac,char **av)
{
	if(ac == 2)
	{
		int fd;
		int ret;
		char buff[4097];

		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{   
			write(2, "Not a valid file / no right to open file.\n", 42);
			return (1);
		}
		ret = read(fd, buff, 4097);
		buff[ret] = '\0';
		ft_putstr(buff);
		if (close(fd) == -1) 
		{   
			write(2, "Failed to close the file\n", 25);
			return (1);
		}
	}
	else if(ac == 1)
		write(2, "File name missing.\n", 19);
	else
		write(2, "Too many arguments.\n", 20);
	return (0);
}
