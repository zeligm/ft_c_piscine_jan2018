/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:31:30 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:31:31 by zmalamud         ###   ########.fr       */
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
