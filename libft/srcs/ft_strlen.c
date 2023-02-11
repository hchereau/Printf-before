/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:01:24 by hchereau          #+#    #+#             */
/*   Updated: 2022/12/11 15:47:16 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		++len;
	return (len);
}

size_t	ft_strlen(const char *s)
{
	return (get_len(s));
}

/*
strlen:
but : renvoyer la longueur de la chaine s
process:
	-> compter le nombre caractere
	-> renvoyer le nombre de caractere
get_nbr:
but: compter nombre de caractere de la chaine s
input: const char *
output: size_t
process:
*/
