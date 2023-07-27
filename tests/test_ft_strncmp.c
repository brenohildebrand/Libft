#include <assert.h>
#include "libft.h"

static void	test_comparison_between_hello_and_hello_world()
{
	assert(ft_strncmp("hello", "hello world", 5) == 0);
}

void	test_ft_strncmp()
{
	test_comparison_between_hello_and_hello_world();
}