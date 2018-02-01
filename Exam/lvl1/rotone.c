/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:26:31 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:26:32 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] < 'Z')
		{
			ft_putchar(str[i] + 1);
		}
		else if (str[i] >= 'a' && str[i] < 'z')
		{
			ft_putchar(str[i] + 1);
		}
		else if (str[i] == 'Z')
		{
			ft_putchar('A');
		}
		else if (str[i] == 'z')
		{
			ft_putchar('a');
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rotone(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
