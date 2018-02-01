/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 13:57:33 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/25 13:57:46 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree 	*btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = (t_btree *)malloc(sizeof(t_btree));
	tmp->item = item;
	tmp->left = 0;
	tmp->right = 0;
	return (tmp);
}
