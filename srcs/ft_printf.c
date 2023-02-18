/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 07:19:16 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/18 13:19:41 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	struct	s_data	data;
	va_list			args;
	ssize_t			index_funtab;
	static	void	(*funtab[])(t_data, va_list) = {get_arg_c, get_arg_string,
	};

	va_start(args, str);
	data.len_str_final = 0;
	ft_bzero(data.buffer, BUFFER_SIZE);
	data.index_buffer = 0;
	while (*str)
	{
		index_funtab = how_printable(str[1]);
		if (*str == '%' && index_funtab != -1)
		{
			funtab[index_funtab](data, args);
			str += 2;
		}
		else
			get_char(&data, str[0]);
		++str;
	}
	if (data.index_buffer > 0)
		write(1, data.buffer, data.index_buffer + 1);
	va_end(args);
	return (data.len_str_final);
}

