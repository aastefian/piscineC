/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 19:29:14 by svilau            #+#    #+#             */
/*   Updated: 2015/10/28 15:28:29 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_put_my_matrix(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
	{
		j = s1[i] - s2[i];
		return (j);
	}
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*aux;
	int		j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) < 0)
				{
					aux = argv[i];
					argv[i] = argv[j];
					argv[j] = aux;
				}
				j++;
			}
			i++;
		}
		ft_put_my_matrix(argc, argv);
	}
	return (0);
}
