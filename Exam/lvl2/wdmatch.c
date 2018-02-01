/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:32:22 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:32:25 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    wdmatch(char *s1, char *s2)
{
	char *result;
	int l = 0;
	result = s1;
	while (*s2)
	{
		if (*s2 == *s1)
			s1++;
		s2++;
	}
	while (result[l])
		l++;
	if(!(*s1))
		write(1, result, l+1);
}
int     main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
