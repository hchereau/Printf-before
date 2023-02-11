/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:55:22 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/11 22:59:45 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest != NULL || src != NULL)
	{	
		i = 0;
		while (i < n)
		{
			((uint8_t *)dest)[i] = ((uint8_t *)src)[i];
			++i;
		}
	}
	return (dest);
}
