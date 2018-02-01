/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:30:31 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:30:33 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			ft_putchar('m' - (str[i] - 'n'));
		else if(str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar('M' - (str[i] - 'N'));
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int 	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return( 0);
	}
	alpha_mirror(argv[1]);
	return (0);
}
