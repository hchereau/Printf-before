/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:01:19 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/22 12:03:22 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	get_arg_d(t_data *data, va_list args)
{
	int		arg_nb;

	arg_nb = va_arg(args, int);
	add_buffer_string(data, ft_itoa(arg_nb));
}

void	get_arg_u(t_data *data, va_list args)
{
	unsigned int		arg_nb;

	arg_nb = va_arg(args, unsigned int);
	add_buffer_string(data, ft_uitoa(arg_nb));
}

void	get_arg_x(t_data *data, va_list args)
{
	size_t	arg_nb;

	arg_nb = va_arg(args, size_t);
	convert_base(data, arg_nb, BASE_HEXA_MINUS);
}

void	get_arg_X(t_data *data, va_list args)
{
	size_t	arg_nb;

	arg_nb = va_arg(args, size_t);
	convert_base(data, arg_nb, BASE_HEXA_MAJUS);
}
