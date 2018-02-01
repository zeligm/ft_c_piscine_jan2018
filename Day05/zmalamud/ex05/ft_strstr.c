/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 21:05:57 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/15 21:06:00 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		y;
	char	*occurrence;

	occurrence = 0;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			occurrence = str + i;
			y = 0;
			while (str[i + y] == to_find[y])
			{
				if (to_find[y + 1] == '\0')
					return (occurrence);
				y++;
			}
			occurrence = 0;
		}
		i++;
	}
	return (0);
}
