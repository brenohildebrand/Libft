#include <assert.h>
#include "libft.h"

static void	test_find_world_in_hello_world_again()
{
	const char *big = "hello world again";
	const char *little = "world";

	assert(ft_strnstr(big, little, 17) == &big[6]);
}

void	test_ft_strnstr()
{
	test_find_world_in_hello_world_again();
}