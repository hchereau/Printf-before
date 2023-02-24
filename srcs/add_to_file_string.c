#include "ft_printf.h"

char	*ft_strnjoin_file(char const *s1, char const *s2, size_t size, t_data *data)
{
	char	*join;

	join = (char *)malloc((data->len_str_final + size + 1) * sizeof(char));
	if (join != NULL)
	{
		if (s1 != NULL)
			ft_memcpy(join, s1, data->len_str_final);
		if (s2 != NULL)
			ft_memcpy(join + data->len_str_final, s2, size + 1);
		join[data->len_str_final + size] = '\0';
	}
	return (join);
}

void	add_to_file(char **s1, char *s2, size_t size, t_data *data)
{
	char	*p1;

	if (s2[0] != '\0')
	{
		p1 = *s1;
		*s1 = ft_strnjoin_file(*s1, s2, size, data);
		free(p1);
	}
}