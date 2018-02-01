/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:31:44 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:31:46 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int x = 0;
	while(i < len)
	{
		if (tab[i] > x)
			x = tab[i];
		i++;
	}
	return (x);
}

#include <stdio.h>
int main()
{
	int tab[] = {6, 7, 8, 9};
	printf("%d", max(tab, 4));
	return(0);
}
