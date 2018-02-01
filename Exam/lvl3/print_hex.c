/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:34:53 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:34:54 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_hex(int nb)
{
	char *hex = "0123456789abcdef";
	int i = 0;

	if (nb / 16)
	{
		print_hex(nb / 16);
		print_hex(nb % 16);
	}
	else
	{
		i = nb % 16;
		write(1, &hex[i], 1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
