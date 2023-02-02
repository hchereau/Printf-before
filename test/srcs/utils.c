/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:22:59 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/02 12:23:47 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

void	check_int_eq(const int a, const int b, const size_t n)
{
	if (a == b)
		printf("%zu : %sOK%s\n", n, GREEN, WHITE);
	else
		printf("%zu : %sKO%s\n", n, RED, WHITE);
}
