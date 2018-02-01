/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:24:02 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/12 14:24:19 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		first;
	int		last;
	char	tmp;

	last = 0;
	first = 0;
	while (str[last] != '\0')
	{
		last++;
	}
	last--;
	while (last > first)
	{
		tmp = str[last];
		str[last] = str[first];
		str[first] = tmp;
		last--;
		first++;
	}
	return (str);
}
