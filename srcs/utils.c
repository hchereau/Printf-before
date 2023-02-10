/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:01:27 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/07 16:13:23 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	add_buffer_string(char *buffer, char *src)
{
	const	size_t	index_buffer = ft_strlen(buffer);
	const	size_t	len_src = ft_strlen(src);
	ssize_t			i;

	
}

int	how_printable(char c)
{
	const	char	verif[] = "cspdiuxX%";
	size_t			i;

	i = 0;
	while (verif[i] != '\0')
	{
		if (verif[i] == c)
			return (i);
		++i;
	}
	return (-1);
}
