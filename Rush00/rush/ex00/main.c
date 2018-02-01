/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 03:17:42 by amagnan           #+#    #+#             */
/*   Updated: 2018/01/14 03:17:46 by amagnan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rush00(int x, int y);
int	rush01(int x, int y);
int	rush02(int x, int y);
int	rush03(int x, int y);
int	rush04(int x, int y);

int	main(void)
{
	rush00(5, 3);
	rush00(5, 1);
	rush00(1, 1);
	rush00(1, 5);
	rush00(4, 4);

	rush01(5, 3);
	rush01(5, 1);
	rush01(1, 1);
	rush01(1, 5);
	rush01(4, 4);

	rush02(5, 3);
	rush02(5, 1);
	rush02(1, 1);
	rush02(1, 5);
	rush02(4, 4);

	rush03(5, 3);
	rush03(5, 1);
	rush03(1, 1);
	rush03(1, 5);
	rush03(4, 4);

	rush04(5, 3);
	rush04(5, 1);
	rush04(1, 1);
	rush04(1, 5);
	rush04(4, 4);
	return (0);
}
