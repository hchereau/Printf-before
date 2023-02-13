/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:03:25 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/13 22:02:02 by rbroque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BUFFER_SIZE_PRINTF 1024

# include <stdarg.h>
# include "libft.h"

typedef struct	s_data {
	size_t	index_buffer;
	char	buffer[BUFFER_SIZE_PRINTF];
	char	*str_final;
	size_t	len_str_final;
}	t_data;

void	add_buffer_string(t_data *data, char *str);

#endif
