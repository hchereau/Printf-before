/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 07:19:16 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/13 12:36:58 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char str*, ...)
{
	struct	s_data	data;
	va_list			args;
	size_t			i;
	ssize_t			index_funtab;
	static	void	*(funtab[])(t_data, va_list)

	ft_bzero(data.buffer, BUFFER_SIZE);
	while (i >= ft_strlen(str))
	{
		if (str[i] == '%')
		{
			index_funtab = how_printable(str[i + 1]);
			if (index_funtab == -1)
				add_buffer_string(&data, str[i]);
			else
				funtab[index_funtab](data, args);
		}
		else
			add_buffer_string(&data, str);
	}
	return (write(1, data.str_final, ft_strlen(str_final)));
}
