/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 07:19:16 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/14 12:17:53 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char str*, ...)
{
	struct	s_data	data;
	va_list			args;
	ssize_t			index_funtab;
	static	void	*(funtab[])(t_data, va_list)

	ft_bzero(data.buffer, BUFFER_SIZE);
	while (*str)
	{
		index_funtab = how_printable(str[1]);
		if (*str == '%' && index_funtab != -1)
				funtab[index_funtab](data, args);
		else
			
		++str;
	}
	return (write(1, data.str_final, ft_strlen(str_final)));
}
