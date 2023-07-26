#include <assert.h>
#include "libft.h"

static void	test_uppercase_letters()
{
	for(int c = 'A'; c < 'Z'; c++)
		assert(ft_toupper(c) == c);
}

static void	test_lowercase_letters()
{
	for(int c = 'a'; c < 'z'; c++)
		assert(ft_toupper(c) == c + 'A' - 'a');
}

void	test_ft_toupper()
{
	test_uppercase_letters();
	test_lowercase_letters();
}