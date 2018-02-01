/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:35:14 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:35:15 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strcapitalize(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (c == 0)
		{
			if (str[c] <= 'z' && str[c] >= 'a')
				str[c] = str[c] - 32;
		}
		else if (str[c - 1] == '+' || str[c - 1] == '-' || str[c - 1] == ' ')
		{
			if (str[c] <= 'z' && str[c] >= 'a')
				str[c] = str[c] - 32;
		}
		else if (str[c] <= 'Z' && str[c] >= 'A')
			str[c] = str[c] + 32;
		c = c + 1;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int i = 1;
	while (argv[i])
	{
		printf("%s\n", strcapitalize(argv[i]));
		i++;
	}
}
