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

int	ft_printf(const char *str,...)
{
	int				printable;
	char			buffer[BUFFER_SIZE_PRINTF];
	char			*str_final;
	static	void	(*fun_tab)[] = ;

	i = 0;
	ft_bzero(buffer, BUFFER_SIZE_PRINTF);
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			
		}
		else
		
		++i;
	}
}
/*
#include <stdio.h>

int main()
{
	printf("%c", "yo");
}
*/
