/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_buffer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:32:05 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/12 12:43:19 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#define BUFFER_SIZE_PRINTF 1024

typedef struct	s_data {
	size_t	index_buffer;
	char	buffer[BUFFER_SIZE_PRINTF];
	char	*str_final;
	size_t	len_str_final;
}	t_data;

size_t	add_last_buffer(t_data *data, char *str)
{
	size_t	i;

	i = 0;
	while (data->index_buffer < BUFFER_SIZE_PRINTF)
	{
		data->buffer[data->index_buffer] = str[i];
		++i;
		++data->index_buffer;
	}
	return (i);
}

void	add_buffer_string(t_data *data, char *str)
{
	size_t	len_str;
	size_t	index_str;

	len_str = ft_strlen(str) + 1;
	if (data->index_buffer + len_str <= BUFFER_SIZE_PRINTF)
	{
		ft_strlcpy(data->buffer, str, len_str);
	}
	else
	{
		index_str = add_last_buffer(data, str);
		add_str(&data->str_final, data->buffer, BUFFER_SIZE_PRINTF);
		ft_bzero(data->buffer, BUFFER_SIZE_PRINTF);
		data->index_buffer = 0;
		add_buffer_string(data, str + index_str);
	}
}
/*
int main(void)
{
	struct	s_data data;
	char	str[] = "salutsalut";

	data.index_buffer = 0;
	add_buffer_string(&data, str);
	printf("buffer: %s\nstr_final: %s", data.buffer, data.str_final);
}
pour compiler : cc srcs/utils_buffer.c libft/libft.a -I./libft/includes && ./a.out
*/
