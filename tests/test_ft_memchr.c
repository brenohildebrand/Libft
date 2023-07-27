#include <assert.h>
#include "libft.h"

static void	test_find_first_o_in_hello_world()
{
	const char *src = "hello world";
	assert(ft_memchr(src, 'o', 10) == &src[4]);
}

void	test_ft_memchr()
{
	test_find_first_o_in_hello_world();
}