/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 07:19:16 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/03 08:45:14 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str,...)
{
	size_t	index;
	int		printable;
	char	buffer[BUFFER_SIZE];

	printable = -2;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			printable = how_printable(str[i+1];
			++i;
		}
		if (
	}
}
