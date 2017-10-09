/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 12:19:47 by svilau            #+#    #+#             */
/*   Updated: 2015/10/20 15:13:55 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		max_pow10(int nb)
{
	int pow;

	pow = 1;
	if (nb < 0)
	{
		nb *= -1;
	}
	while (nb >= 10)
	{
		pow *= 10;
		nb /= 10;
	}
	return (pow);
}

void	ft_putnbr(int nb)
{
	int	pow10;
	int digit;

	pow10 = max_pow10(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		while (pow10)
		{
			digit = nb / pow10;
			ft_putchar(digit + '0');
			nb -= digit * pow10;
			pow10 /= 10;
		}
	}
}

void	ft_print(int x, int y)
{
	if (x < y)
	{
		if (x < 10)
		{
			ft_putchar('0');
			ft_putnbr(x);
			ft_putchar(' ');
		}
		else
		{
			ft_putnbr(x);
			ft_putchar(' ');
		}
		if (y < 10)
		{
			ft_putchar('0');
			ft_putnbr(y);
		}
		else
		{
			ft_putnbr(y);
		}
	}
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x <= 98)
	{
		while (y <= 99)
		{
			if (x < y)
			{
				ft_print(x, y);
				if (x < 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			y++;
		}
		y = 0;
		x++;
	}
}
