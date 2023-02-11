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

add_buffer_string (struct buffer_data *mbuffer, struct strf_data, char *string)
{
	
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
