#include <assert.h>
#include "libft.h"

static void	test_hello_world()
{
	assert(ft_strlen("Hello World") == 11);
}

static void test_empty_string()
{
	assert(ft_strlen("") == 0);
}

void	test_ft_strlen()
{
	test_hello_world();
	test_empty_string();
}