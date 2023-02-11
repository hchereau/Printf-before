/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:03:15 by hchereau          #+#    #+#             */
/*   Updated: 2023/01/12 13:51:25 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdbool.h>
# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_strnjoin(char const *s1, char const *s2, size_t size);
void	add_str(char **s1, char *s2, size_t size);
void	add_rest(char **line, char *dest, char *src, size_t index);
void	fill_line(char **line, char *rest, size_t index, int fd);
size_t	get_index(char *str, const char c, size_t size);

#endif
