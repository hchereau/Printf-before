/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:03:25 by hchereau          #+#    #+#             */
/*   Updated: 2023/03/02 15:53:44 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BUFFER_SIZE_PRINTF 1024
# define BASE_HEXA_MINUS "0123456789abcdef"
# define BASE_HEXA_MAJUS "0123456789ABCDEF"

# include <stdarg.h>
# include "../libft/includes/libft.h"

typedef struct s_data {
	size_t	index_buffer;
	char	buffer[BUFFER_SIZE_PRINTF];
	char	*str_final;
	size_t	len_str_final;
}	t_data;

void	add_buffer_string(t_data *data, char *str);
void	get_arg_c(t_data *data, va_list args);
void	get_char(t_data *data, char c);
void	get_arg_string(t_data *data, va_list args);
void	get_arg_p(t_data *data, va_list args);
void	get_arg_d(t_data *data, va_list args);
void	get_arg_u(t_data *data, va_list args);
void	get_arg_x(t_data *data, va_list args);
void	get_arg_xmaj(t_data *data, va_list args);
int		add_pourcent(t_data *data, ssize_t index_funtab);
void	convert_base(t_data *data, size_t nb, char	*base);
int		ft_printf(const char *str, ...);
char	*ft_uitoa(unsigned int n);
ssize_t	how_printable(char c);
void	get_size_final(t_data *data);
char	*ft_strnjoin_file(size_t size, t_data *data);
void	add_to_file(size_t size, t_data *data);
void	add_buffer_char(t_data *data, char c);

#endif
