/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pointeur.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:24:58 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/21 18:25:56 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
void	get_arg_p(t_data *data, va_list args)
{
	size_t nb;	

	nb = va_arg(args, size_t);
	add_buffer_string(data, "0x");
	convert_base(data, nb, BASE_HEXA_MINUS);
}
