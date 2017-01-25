/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 11:29:15 by cparis            #+#    #+#             */
/*   Updated: 2017/01/25 14:29:04 by cparis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

#define BUFF_SIZE 32

#define MALLCHECK(x) if (!x) return (-1);

int		get_next_line(int const fd, char **line);

#endif
