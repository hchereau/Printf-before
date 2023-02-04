/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:01:27 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/04 16:48:04 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		add_buffer(char **buffer, char *src, size_t	index_buffer)
{
	size_t	len_src = ft_strlen(src);

	if (len_src + index_buffer < BUFFER_SIZE)
	{
		ft_strlcpy(buffer, src, len_src);
		return (1);
	}
	return (0);
}
