/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfiasche <jfiasche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 14:33:39 by jfiasche          #+#    #+#             */
/*   Updated: 2018/01/21 20:50:50 by jfiasche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"
#define ROW(n) (n / 9)
#define COL(n) (n % 9)
#define GIVEN(n) (n >= '1' && n <= '9')
#define PENCIL_CONST 16
#define SQUARE_START(n) ((n / 3) * 3)

int		check_row(char **board, int loc, char num)
{
	int		cur_col;

	cur_col = 0;
	while (cur_col < 9)
	{
		if (board[ROW(loc)][cur_col] == num ||
			board[ROW(loc)][cur_col] == num + PENCIL_CONST)
			return (0);
		cur_col++;
	}
	return (1);
}

int		check_col(char **board, int loc, char num)
{
	int		cur_row;

	cur_row = 0;
	while (cur_row < 9)
	{
		if (board[cur_row][COL(loc)] == num ||
			board[cur_row][COL(loc)] == num + PENCIL_CONST)
			return (0);
		cur_row++;
	}
	return (1);
}

int		check_square(char **board, int loc, char num)
{
	int		sq_row;
	int		sq_col;
	int		i;

	sq_row = SQUARE_START((ROW(loc)));
	sq_col = SQUARE_START((COL(loc)));
	i = 0;
	while (i < 9)
	{
		if (board[sq_row + (i % 3)][sq_col + (i / 3)] == num ||
			board[sq_row + (i % 3)][sq_col + (i / 3)] == num + PENCIL_CONST)
			return (0);
		i++;
	}
	return (1);
}

int		valid_placement(char **board, int loc, char num)
{
	return (check_row(board, loc, num) && check_col(board, loc, num) &&
		check_square(board, loc, num));
}

int		sudoku_solve(char **board, int cur)
{
	char	num_to_place;

	num_to_place = '1';
	if (cur >= 81)
		return (1);
	if (GIVEN((board[ROW(cur)][COL(cur)])))
		return (sudoku_solve(board, cur + 1));
	while (num_to_place <= '9')
	{
		if (valid_placement(board, cur, num_to_place))
		{
			board[ROW(cur)][COL(cur)] = num_to_place + PENCIL_CONST;
			if (sudoku_solve(board, cur + 1))
				return (1);
			board[ROW(cur)][COL(cur)] = '.';
		}
		num_to_place++;
	}
	return (0);
}
