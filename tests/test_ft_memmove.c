#include <assert.h>
#include "libft.h"

static void test_overlapped_hello_world()
{
	char dest[] = "    hello world\0   ";
	char *src = dest[4];
	
	ft_memmove(dest, src, 12);
	
	int index = 0;
	char *result = "hello world";
	while (src[index])
	{
		assert(result[index] == dest[index]);
		index++;
	}
}

void	test_ft_memmove()
{
	test_overlapped_hello_world();
}