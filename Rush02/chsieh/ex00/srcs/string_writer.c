/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_writer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgunkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 20:20:20 by cgunkel           #+#    #+#             */
/*   Updated: 2018/01/28 07:39:19 by cgunkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_putchar(int i, char c)
{
	write(i, &c, 1);
}

void		ft_putstr(int i, char *str)
{
	int x;

	x = -1;
	while (str[++x] != 0)
		ft_putchar(i, str[x]);
	ft_putchar(i, '\n');
}

void		ft_putnbr(int i, int nbr)
{
	if (nbr < 0)
	{
		ft_putchar(i, '-');
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_putnbr(i, nbr / 10);
	ft_putchar(1, (nbr % 10) + 48);
}

void		write_rush(int row, int column, int rushnbr, int more)
{
	if (more > 1)
		ft_putstr(1, " || ");
	ft_putstr(1, "[rush-0");
	ft_putnbr(1, rushnbr);
	ft_putstr(1, "] [");
	ft_putnbr(1, column);
	ft_putstr(1, "] [");
	ft_putnbr(1, row);
	ft_putstr(1, "]");
}

int			ft_strcmp(char *str1, char *str2)
{
	int i;
	int x;

	i = -1;
	x = 0;
	while ((str1[++i] || str2[i]) && x == 0)
		if (str1[i] != str2[i])
			x = str1[i] - str2[i];
	return (x);
}
