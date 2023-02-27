/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:59:45 by rbroque           #+#    #+#             */
/*   Updated: 2023/02/27 14:47:33 by hchereau         ###   ########.fr       */
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

int	main(void)
{
	int		oui;
	int		ok;

	ok = ft_printf("\nayo %%\n");
	ft_printf("\n\n%d\n\n", ok);
	ft_printf("\n--------------------\n\n");
	oui = printf("\nayo %%\n");
	printf("\n\n%d\n\n", oui);
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
