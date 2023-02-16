/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:59:45 by rbroque           #+#    #+#             */
/*   Updated: 2023/02/16 13:15:08 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"



/*
int main(void)
{
	struct	s_data data;
	char	str[] = "salutsalut";

	data.index_buffer = 0;
	add_buffer_string(&data, str);
	printf("buffer: %s\nstr_final: %s", data.buffer, data.str_final);
}
*/

int	main(void)
{
	char c;

	c = 'c';
	ft_printf("salut %c", 'c');
}

//pour compiler : cc srcs/utils_buffer.c libft/libft.a -I./libft/includes && ./a.out
