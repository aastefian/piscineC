/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 13:31:38 by svilau            #+#    #+#             */
/*   Updated: 2016/01/19 14:41:02 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putstr_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

int main()
{
	int fd;
	int ret;
	char buff[4097];

	fd = open("42", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
	}
	ft_putnbr(fd);
	ret = read(fd, buff, 4097);
	buff[ret] = '\0';
	ft_putnbr(ret);
	ft_putstr(buff);
	if (close(fd) == -1)
	{
		ft_putstr("clode() failed\n");
		return (1);
	}
	return (0);
}
