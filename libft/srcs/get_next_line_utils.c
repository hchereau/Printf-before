/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:46:10 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/11 19:41:30 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t size)
{
	size_t	size1;
	char	*join;

	size1 = 0;
	if (s1 != NULL)
		size1 = ft_strlen(s1);
	join = (char *)malloc((size1 + size + 1) * sizeof(char));
	if (join != NULL)
	{
		if (s1 != NULL)
			ft_strlcpy(join, s1, size1 + 1);
		if (s2 != NULL)
			ft_strlcpy(join + size1, s2, size + 1);
		join[size1 + size] = '\0';
	}
	return (join);
}

void	add_str(char **s1, char *s2, size_t size)
{
	char	*p1;

	if (s2[0] != '\0')
	{
		p1 = *s1;
		*s1 = ft_strnjoin(*s1, s2, size);
		free(p1);
	}
}
/*
void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		++i;
	}
	return (s);
}
*/
