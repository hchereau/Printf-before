/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:03:25 by hchereau          #+#    #+#             */
/*   Updated: 2023/02/18 15:58:21 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BUFFER_SIZE_PRINTF 1024
# define BASE_HEXA "0123456789ABCDEF"

# include <stdarg.h>
# include "../libft/includes/libft.h"

typedef struct	s_data {
	size_t	index_buffer;
	char	buffer[BUFFER_SIZE_PRINTF];
	char	*str_final;
	size_t	len_str_final;
}	t_data;

void	add_buffer_string(t_data *data, char *str);
void	get_arg_c(t_data *data, va_list args);
void	get_char(t_data *data, char c);
void	get_arg_string(t_data *data, va_list args);
void	convert_base(size_t nb, char	*base);
int		ft_printf(const char *str, ...);
ssize_t	how_printable(char c);
size_t	get_size_final(t_data *data);

#endif
