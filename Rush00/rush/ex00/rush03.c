/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 03:18:06 by amagnan           #+#    #+#             */
/*   Updated: 2018/01/14 03:18:09 by amagnan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	putline03(char start, char end, char fill, int length)
{
	ft_putchar(start);
	while (length > 2)
	{
		ft_putchar(fill);
		length--;
	}
	if (length == 2)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

int		rush03(int x, int y)
{
	int length;

	length = y;
	if (x <= 0 || y <= 0)
		return (0);
	while (length >= 1)
	{
		if (length == y || length == 1)
			putline03('A', 'C', 'B', x);
		else
			putline03('B', 'B', ' ', x);
		length--;
	}
	return (0);
}
