/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:01:27 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/22 14:01:26 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	how_printable(char c)
{
	const	char	verif[] = "cspdiuxX%";
	ssize_t			i;

	i = 0;
	while (verif[i] != '\0')
	{
		if (verif[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

size_t	get_size_final(t_data *data)
{
	if (data->index_buffer > 0)
	{
		data->len_str_final += write(1, data->buffer, data->index_buffer + 1);
	}
	return(data->len_str_final - 1);
}

void	convert_base(t_data *data, size_t nb, char	*base)
{
	const size_t len_base = ft_strlen(base);

	if (nb > len_base)
		convert_base(data, nb/len_base, base);
	get_char(data, base[nb%len_base]);
}
