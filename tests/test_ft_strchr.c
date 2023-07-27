#include <assert.h>
#include "libft.h"

static void	test_find_o_in_hello_world()
{
	const char *p = "hello world";

	assert(ft_strchr(p, 'o') == &p[4]);
}

void	test_ft_strchr()
{
	test_find_o_in_hello_world();
}