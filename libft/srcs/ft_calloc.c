/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:18:27 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/11 18:24:01 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	const size_t	size_total = nmemb * size;
	void			*ptr;

	ptr = NULL;
	if (size_total == 0 || nmemb <= SIZE_MAX / size)
		ptr = malloc(size_total);
	if (ptr != NULL)
		ft_bzero(ptr, size_total);
	return (ptr);
}
