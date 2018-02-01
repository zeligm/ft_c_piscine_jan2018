/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:21:59 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:22:02 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'B';
	while (a <= 'z' && b <= 'Z')
	{
		ft_putchar(a);
		ft_putchar(b);
		a += 2;
		b += 2;
	}
	ft_putchar('\n');
	return (0);
}
