/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:33:28 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:33:30 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int i = 0;
	int space = 0;
	while (str[i])
	{
		if (str[i] <= 32)
			space = 1;
		else if (space)
		{
			write(1, " ", 1);
			space = 0;
		}
		else if (str[i] > 32)
			write(1, &str[i], 1);
		i++;
	}
}

void	ft_check(char *str)
{
	while (*str <= 32)
		str++;
	epur_str(str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_check(argv[1]);
	write(1, "\n", 1);
	return (0);
}

