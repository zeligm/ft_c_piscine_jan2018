/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 22:38:54 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/14 22:39:09 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int		end_row(int size)
{
	int row;
	int row_length;
	int row_count;

	row = 1;
	row_length = 1;
	row_count = 4;
	while (row <= size)
	{
		row_length = row_length + 2 * (2 + row);
		row++;
		row_length = row_length + row_count;
		if (row % 2 && row < size)
			row_count = row_count + 2;
	}
	row_length = row_length - row_count;
	return (row_length);
}

void	put_row(int space)
{
	int pos;

	pos = 0;
	while (pos < space)
	{
		ft_putchar(' ');
		pos++;
	}
}

void	groups(int size, int row, int row_length, int count)
{
	int door;
	int pos;

	door = 1 + 2 * ((row - 1) / 2);
	pos = 0;
	while (pos < row_length)
	{
		if (pos == 0)
			ft_putchar('/');
		else if (pos == row_length - 1)
			ft_putchar('\\');
		else
		{
			if (row == size && pos >= (row_length - door) / 2
					&& pos < (row_length + door) / 2 && 2 + row - count <= door)
				if (door >= 5 && count == 2 + row - door / 2 - 1
						&& pos == (row_length + door) / 2 - 2)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		}
		pos++;
	}
}

void	sastantua(int size)
{
	int	row;
	int	height;
	int	step;
	int	row_length;

	if (size < 1)
		return ;
	row = 1;
	row_length = 1;
	while (row <= size)
	{
		height = 2 + row;
		step = 0;
		while (step < height)
		{
			row_length = row_length + 2;
			put_row((end_row(size) - row_length) / 2);
			groups(size, row, row_length, step);
			ft_putchar('\n');
			step++;
		}
		row++;
		row_length += 4 + 2 * ((row - 2) / 2);
	}
}

int main(void)
{
	sastantua(7);
}
