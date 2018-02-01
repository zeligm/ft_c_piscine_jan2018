/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:30:38 by zmalamud          #+#    #+#             */
/*   Updated: 2018/01/30 15:30:40 by zmalamud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int do_op(int num1, char op, int num2)
{
	if (op == '-')
		return (num1 - num2);
	else if (op == '+')
		return (num1 + num2);
	else if (op == '*')
		return (num1 * num2);
	else if (op == '/')
	{
		if (num2 == 0)
			return (0);
		else
			return (num1 / num2);
	}
	else if (op == '%')
	{
		if (num2 == 0)
			return (0);
		else
			return (num1 % num2);
	}
	else
		return (0);
}

int main(int ac, char **av)
{
	if (ac == 4)
		printf("%d", do_op(atoi(av[1]), *av[2], atoi(av[3])));
	printf("\n");
	return (0);
}
