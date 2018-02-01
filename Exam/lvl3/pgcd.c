/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:34:45 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:34:47 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	pgcd(int n1, int n2)
{
	int div = 1;
	int pgcd = 0;
	if (n1 <= 0 || n2 <= 0)
		return ;
	while (div <= n1 || div <= n2)
	{
		if (n1 % div == 0 && n2 % div == 0)
			pgcd = div;
		div++;
	}
	printf("%d", pgcd);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
