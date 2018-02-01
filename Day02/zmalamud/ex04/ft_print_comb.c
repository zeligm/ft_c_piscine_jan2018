/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:38:38 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/11 10:39:10 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_nums(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_conditional(char a)
{
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('\n');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_print_nums(a, b, c);
				ft_conditional(a);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}
