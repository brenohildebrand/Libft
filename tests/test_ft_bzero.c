#include <assert.h>
#include "libft.h"

static void	test_zeroing_hello_world()
{
	char str[] = "hello world";
	ft_bzero(str, 12);
	for(int i = 0; i < 12; i++)
		assert(str[i] == 0);
}

void	test_ft_bzero()
{
	test_zeroing_hello_world();
}