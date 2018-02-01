/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 03:17:55 by amagnan           #+#    #+#             */
/*   Updated: 2018/01/14 03:17:58 by amagnan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	putline02(char start, char end, char fill, int length)
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

int		rush02(int x, int y)
{
	int length;

	length = y;
	if (x <= 0 || y <= 0)
		return (0);
	while (length >= 1)
	{
		if (length == y)
			putline02('A', 'A', 'B', x);
		else if (length == 1)
			putline02('C', 'C', 'B', x);
		else
			putline02('B', 'B', ' ', x);
		length--;
	}
	return (0);
}
