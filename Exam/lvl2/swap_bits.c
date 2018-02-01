/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:32:08 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:32:09 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	     return ((octet >> 4) | (octet << 4));
}

int main()
{
	     printf("0x%X\n", swap_bits(0x42));
		      return (0);
}
