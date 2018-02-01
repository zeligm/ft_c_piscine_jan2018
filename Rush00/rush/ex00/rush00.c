/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 03:17:13 by amagnan           #+#    #+#             */
/*   Updated: 2018/01/14 03:17:21 by amagnan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	putline00(char start, char end, char fill, int length)
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

int		rush00(int x, int y)
{
	int length;

	length = y;
	if (x <= 0 || y <= 0)
		return (0);
	while (length >= 1)
	{
		if (length == y || length == 1)
			putline00('o', 'o', '-', x);
		else
			putline00('|', '|', ' ', x);
		length--;
	}
	return (0);
}
