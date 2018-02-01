/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfiasche <jfiasche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 20:15:12 by jfiasche          #+#    #+#             */
/*   Updated: 2018/01/21 19:44:50 by jfiasche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "solver.h"
#define INVALID_CHAR(c) (c != '.' && !(c >= '1' && c <= '9'))
#define PENCIL_CONST 16

void	print_board(char **board)
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (board[row][col] != '\0')
		{
			if (board[row][col] >= '1' && board[row][col] <= '9')
				ft_putchar(board[row][col]);
			else if (board[row][col] >= 'A' && board[row][col] <= 'I')
				ft_putchar(board[row][col] - PENCIL_CONST);
			else if (board[row][col] == '.')
				ft_putstr("You missed a spot\n");
			else
				ft_putstr("Something bad happened\n");
			if (col < 8)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int		validity_check(char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (INVALID_CHAR((argv[i][j])))
				return (0);
			j++;
		}
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc != 10 || !validity_check(++argv) || !sudoku_solve(argv, 0))
	{
		ft_putstr("Error\n");
		return (1);
	}
	print_board(argv);
	return (0);
}
