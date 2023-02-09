/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 07:19:16 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/06 13:04:39 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

i
int	ft_printf(const char *str,...)
{
	va_list			args;
	char			buffer[BUFFER_SIZE_PRINTF];
	char			*str_final;
	static	void	(*fun_tab)[char *, va_list, char *] = {get_arg_c};

	ft_bzero(buffer, BUFFER_SIZE_PRINTF);
	va_start(args, str);
	while (i < ft_strlen(str) - 1)
	{
		if (str[i] == '%' && how_printable(str[i + 1] != -1))
		{
			fun_tab[how_printable(str[i + 1](buffer, args, str_final);
		}
		else
		{
			if (add_buffer_string(buffer, (char *)str[i] != -1)
				add_str(str_final, buffer)
		}
		++i;
	}
	va_end(args);
	print_str_final(str_final, buffer);
	return (ft_strlen(str_final))
}

/*
#include <stdio.h>

int main()
{
	printf("%c", "yo");
}
*/
