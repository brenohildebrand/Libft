#include <assert.h>
#include "libft.h"

static void	test_printable_characters()
{
	for(int c = 0x20; c < 0x7f; c++)
		assert(ft_isprint(c) == 1);
}

static void	test_non_printable_characters()
{
	for(int c = 0; c < 0x20; c++)
		assert(ft_isprint(c) == 0);
	assert(ft_isprint(0x7f) == 0);
}

void	test_ft_isprint()
{
	test_printable_characters();
	test_non_printable_characters();
}