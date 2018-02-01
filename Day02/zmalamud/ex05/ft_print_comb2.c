/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:33:48 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/11 09:33:58 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	send_array(char a, char b, char x, char y)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(x);
	ft_putchar(y);
	if (a == '9' && b == '8' && x == '9' && y == '9')
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int x;
	int y;

	a = '0' - 1;
	while (++a <= '9')
	{
		b = '0' - 1;
		while (++b <= '9')
		{
			x = a;
			y = b + 1;
			while (x <= '9')
			{
				while (y <= '9')
				{
					send_array(a, b, x, y);
					y++;
				}
				y = '0';
				x++;
			}
		}
	}
}
