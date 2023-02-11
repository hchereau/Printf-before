/*
#include <stdio.h>

#define BUFFER_SIZE_PRINTF 3

struct	buffer_data {
	size_t	index_buffer;
	char	buffer[BUFFER_SIZE_PRINTF];
};
*/
size_t	add_last_buffer(struct buffer_data *mbuffer, char *str)
{
	size_t	i;

	i = 0;
	while (BUFFER_SIZE_PRINTF - mbuffer->index_buffer > 0)
	{
		mbuffer->buffer[mbuffer->index_buffer] = str[i];
		++i;
		++mbuffer->index_buffer;
	}
	return (i);
}

add_buffer_str (struct buffer_data *mbuffer, struct strf_data m_strf, char *str)
{
	size_t	len_str;
	size_t	index_str;

	len_str = ft_strlen(str)
	if (mbuffer->index_buffer + len_str <= BUFFER_SIZE_PRINTF)
		ft_strlcpy(mbuffer->buffer, str, len_str);
	else
		index_str = add_last_buffer(&mbuffer, str);
		add_str(&m_strf->str_final, mbuffer->buffer, BUFFER_SIZE_PRINTF);
		ft_bzero(mbuffer->buffer, BUFFER_SIZE_PRINTF);
		add_buffer_string(&mbuffer, &m_strf)
}
/*
int main(void)
{
	struct	buffer_data mbuffer;
	char	str[5] = "salut";
	size_t	index;

	mbuffer.index_buffer = 0;
	index = add_last_buffer(&mbuffer, str);

	printf("buffer:%s\n\n index:%ld", mbuffer.buffer, index);
}
*/
