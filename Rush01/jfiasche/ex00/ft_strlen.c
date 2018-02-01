/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfiasche <jfiasche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 10:52:37 by jfiasche          #+#    #+#             */
/*   Updated: 2018/01/17 16:19:33 by jfiasche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
