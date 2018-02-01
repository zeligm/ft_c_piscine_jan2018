/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:32:02 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/12 16:32:28 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	is_neg;
	int	number;

	i = 0;
	is_neg = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		is_neg = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (is_neg)
		return (-number);
	else
		return (number);
}
