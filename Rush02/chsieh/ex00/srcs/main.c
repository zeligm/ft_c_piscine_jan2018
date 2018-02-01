/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgunkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 06:19:44 by cgunkel           #+#    #+#             */
/*   Updated: 2018/01/28 07:37:59 by cgunkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			main(void)
{
	int		row;
	int		column;
	char	*input;

	row = 0;
	column = 0;
	input = dimension_detect(&row, &column);
	rush_check(input, row, column);
	ft_putchar(1, '\n');
	return (0);
}
