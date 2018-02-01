/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:31:59 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:32:00 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	r = 0;
	unsigned		byte = 8;

	while (byte--)
	{
		r = (r << 1) | (byte & 1);
		byte >>= 1;
	}
	return (r);
}
