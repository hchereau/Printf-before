/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:48:44 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/11 15:42:32 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*inverse_memcpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		((uint8_t *)dest)[n - 1] = ((const uint8_t *)src)[n - 1];
		--n;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
		dest = inverse_memcpy(dest, src, n);
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	static void *(*funcs[])(void *, const void, size_t) = {memcpy, inverse_memcpy};

	return (funcs[dest < src](dest, src, n));
}*/
