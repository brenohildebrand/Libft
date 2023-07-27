#include <assert.h>
#include "libft.h"

static void	test_find_last_o_in_hello_world()
{
	const char *p = "hello world";

	assert(ft_strrchr(p, 'o') == &p[7]);
}

void	test_ft_strrchr()
{
	test_find_last_o_in_hello_world();
}