/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgunkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 07:25:20 by cgunkel           #+#    #+#             */
/*   Updated: 2018/01/28 07:52:02 by cgunkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char		*rush04(int row, int column)
{
	int		r;
	int		c;
	int		i;
	char	*str;

	str = malloc((row * column) + 1);
	r = 1;
	i = 0;
	if (row < 0 || column < 0)
		return (0);
	while (r <= row)
	{
		c = 1;
		while (c++ <= column)
			str[i++] = pos04(row, column, r, c);
		str[i++] = '\n';
		i++;
		r++;
	}
	str[i] = 0;
	return (str);
}

char		pos04(int row, int column, int r, int c)
{
	char a;
	char b;

	a = ' ';
	if (row == 1)
	{
		b = (column == c) ? 'C' : 'B';
		a = (column == 1) ? 'A' : b;
	}
	if (row == r)
	{
		b = (column == c) ? 'A' : 'B';
		a = (column == 1) ? 'C' : b;
	}
	if (column == 1 || column == c)
		a = 'B';
	return (a);
}
