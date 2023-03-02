/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:59:45 by rbroque           #+#    #+#             */
/*   Updated: 2023/02/28 18:59:28 by hchereau         ###   ########.fr       */
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
/*
int	main(void)
{
	char c;

	c = 'c';
	ft_printf("salut %c", c);
}
*/
#include <limits.h>

int	main(void)
{
	const char	*str = "%u%s%w";
	const unsigned long	arg1 = 0;
	const char	*arg2 = "hello";
	size_t		len1;
	size_t		len2;

	len1 = ft_printf(str, arg1, arg2);
	printf("\n----------------\n");
	len2 = printf(str, arg1, arg2);
	printf("\n--> %d\n", len1 == len2);
}

/*
int	main(void)
{
	size_t	nb;

	nb = 2556;
	printf("9FC");
	convert_base(nb, BASE_HEXA);	
}
*/
