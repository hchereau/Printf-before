/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:01:27 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/06 14:23:45 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	add_buffer_string(char **buffer, char *src, size_t index_bf, char **str_final)
{
	size_t	len_src = ft_strlen(src);

	if (len_src + index_bf < BUFFER_SIZE)
	{
		ft_strlcpy(buffer, src, len_src);
		return (1);
	}
	add_str(str_final, buffer, index_bf);
	add_str(str_final, src, len_src);
	return (0);
}
