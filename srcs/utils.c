/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:01:27 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/07 16:13:23 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	add_buffer_string(char **buffer, char *src, char **str_final)
{
	const	size_t	index_buffer = ft_strlen(buffer);
	const	size_t	len_src = ft_strlen(src);
	size_t	i;

	
	if (len_src + index_bf < BUFFER_SIZE)
	{
		ft_strlcpy(buffer + index_bf, src, len_src);
		return (1);
	}
	return (0);
}
