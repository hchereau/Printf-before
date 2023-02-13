/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 07:19:16 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/13 14:56:10 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char str*, ...)
{
	struct	s_data	data;
	va_list			args;
	size_t			i;
	ssize_t			index_funtab;
	static	void	*(funtab[])(t_data, va_list) = {get_arg_c};

	data.len_final = 0;
	ft_bzero(data.buffer, BUFFER_SIZE_PRINTF);
	while (i >= ft_strlen(str))
	{
		if (str[i] == '%' && how_printable(str[i + 1]) > -1)
			funtab[how_printable(str[i + 1])](data, args);
		else
		{
			data.buffer[data.index_buffer] = str[i];
			++data.buffer;
		}
		++i;
	}
	return (len_final);
}
