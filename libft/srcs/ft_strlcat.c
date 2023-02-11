/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:20:16 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/11 19:08:34 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t	size_src = ft_strlen(src);
	size_t			size_dst;

	if (dst == NULL)
		size_dst = 0;
	else
		size_dst = ft_strlen(dst);
	if (size <= size_dst)
		return (size + size_src);
	ft_strlcpy(dst + size_dst, src, size - size_dst);
	return (size_dst + size_src);
}
