/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgunkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 01:52:43 by cgunkel           #+#    #+#             */
/*   Updated: 2018/01/28 07:53:06 by cgunkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

/*
** Functions in main.c
*/
int			main(void);

/*
** Functions in string_writer.c
*/
void		ft_putchar(int i, char c);
void		ft_putstr(int i, char *str);
void		ft_putnbr(int i, int nbr);
void		write_rush(int row, int column, int rushnbr, int more);
int			ft_strcmp(char *str1, char *str2);

/*
** Functions in rush_detect.c
*/
void		rush_check(char *input, int row, int column);
char		*dimension_detect(int *row, int *column);

/*
** Functions in rush00_01.c
**              rush02_03.c
**              rush04.c
*/
char		*rush00(int row, int column);
char		pos00(int row, int column, int r, int c);
char		*rush01(int row, int column);
char		pos01(int row, int column, int r, int c);
char		*rush02(int row, int column);
char		pos02(int row, int column, int r, int c);
char		*rush03(int row, int column);
char		pos03(int row, int column, int r, int c);
char		*rush04(int row, int column);
char		pos04(int row, int column, int r, int c);

#endif
