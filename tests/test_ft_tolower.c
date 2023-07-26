#include <assert.h>
#include "libft.h"

static void	test_uppercase_letters()
{
	for(int c = 'A'; c < 'Z'; c++)
		assert(ft_tolower(c) == c + 'a' - 'A');
}

static void	test_lowercase_letters()
{
	for(int c = 'a'; c < 'z'; c++)
		assert(ft_tolower(c) == c);
}

void	test_ft_tolower()
{
	test_uppercase_letters();
	test_lowercase_letters();
}