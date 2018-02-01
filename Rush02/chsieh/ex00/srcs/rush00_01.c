/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgunkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 07:09:25 by cgunkel           #+#    #+#             */
/*   Updated: 2018/01/28 07:50:52 by cgunkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char		*rush00(int row, int column)
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
			str[i++] = pos00(row, column, r, c);
		str[i++] = '\n';
		i++;
		r++;
	}
	str[i] = 0;
	return (str);
}

char		pos00(int row, int column, int r, int c)
{
	char a;
	char b;

	a = ' ';
	if (row == 1)
	{
		b = (column == c) ? 'o' : '-';
		a = (column == 1) ? 'o' : b;
	}
	if (row == r)
	{
		b = (column == c) ? 'o' : '-';
		a = (column == 1) ? 'o' : b;
	}
	if (column == 1 || column == c)
		a = '|';
	return (a);
}

char		*rush01(int row, int column)
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
			str[i++] = pos01(row, column, r, c);
		str[i++] = '\n';
		i++;
		r++;
	}
	str[i] = 0;
	return (str);
}

char		pos01(int row, int column, int r, int c)
{
	char a;
	char b;

	a = ' ';
	if (row == 1)
	{
		b = (column == c) ? '\\' : '*';
		a = (column == 1) ? '/' : b;
	}
	if (row == r)
	{
		b = (column == c) ? '/' : '*';
		a = (column == 1) ? '\\' : b;
	}
	if (column == 1 || column == c)
		a = '*';
	return (a);
}
