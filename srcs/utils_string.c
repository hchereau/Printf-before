/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:39:45 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/13 14:26:54 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

void	get_arg_c(t_data *data, va_list args)
{
	char	c_str[2];
	unsigned char	c;
	
	c = va_args(args, char);
	c_str[0] = c;
	c_str[1] = '\0';

	add_buffer_string(data, c_str);
}
