/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:34:00 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:34:03 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	t_list *list;
	
	list = begin_list;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}
