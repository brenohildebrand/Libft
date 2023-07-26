#include <assert.h>
#include "libft.h"

static void	test_cpy_hello_world()
{
	int index;
	char dest[256];
	char *src = "hello world";

	ft_memcpy(dest, src, 11);
	
	index = 0;
	while (src[index])
	{
		assert(dest[index] == src[index]);
		index++;
	}
}

static void	test_return_value()
{
	char dest[256];
	char *src = "hello world";

	assert(ft_memcpy(dest, src, 11) == dest);
}

void	test_ft_memcpy()
{
	test_cpy_hello_world();
	test_return_value();
}