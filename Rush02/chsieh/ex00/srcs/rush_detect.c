/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_detect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgunkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 21:25:20 by cgunkel           #+#    #+#             */
/*   Updated: 2018/01/28 07:59:43 by cgunkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		rush_check(char *input, int row, int column)
{
	int count;

	count = 0;
	if (ft_strcmp(input, rush00(row, column)) == 0)
		write_rush(row, column, 0, count++);
	if (ft_strcmp(input, rush01(row, column)) == 0)
		write_rush(row, column, 1, count++);
	if (ft_strcmp(input, rush02(row, column)) == 0)
		write_rush(row, column, 2, count++);
	if (ft_strcmp(input, rush03(row, column)) == 0)
		write_rush(row, column, 3, count++);
	if (ft_strcmp(input, rush04(row, column)) == 0)
		write_rush(row, column, 4, count++);
	if (count == 0)
		ft_putstr(1, "aucune");
}

char		*dimension_detect(int *row, int *column)
{
	char	buffer;
	char	*input;
	int		i;
	int		x;

	i = 0;
	x = 0;
	input = (char *)malloc(sizeof(char) * 1000000000);
	while ((read(0, &buffer, 1)))
	{
		*column = i;
		if (buffer == '\n')
		{
			i = 0;
			(*row)++;
		}
		else
			i++;
		input[x] = buffer;
		x++;
	}
	input[x] = 0;
	return (input);
}
