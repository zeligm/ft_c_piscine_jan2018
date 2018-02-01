/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 11:09:58 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/18 11:10:01 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*str;

	length = 0;
	i = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	str = (char*)malloc(sizeof(*str) * (length + 1));
	while (i < length)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
