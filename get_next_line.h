/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 11:29:15 by cparis            #+#    #+#             */
/*   Updated: 2016/12/07 11:45:10 by cparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 32;

char	*get_next_line(int const fd);
char 	get_next_char(int const fd);
char  *realloc_master(char *ptr, unsigned long size);

#endif
