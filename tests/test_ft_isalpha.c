#include <assert.h>
#include "libft.h"

static void	test_lowercase_letters()
{
	for(int c = 'a'; c <= 'z'; c++)
		assert(ft_isalpha(c) != 0);
}

static void	test_uppercase_letters()
{
	for(int c = 'A'; c <= 'Z'; c++)
		assert(ft_isalpha(c) != 0);
}

static void	test_all_non_alpha_characters()
{
	for(int c = 0; c < 128; c++)
		if (!(((char)c >= 'a' && (char)c <= 'z') || ((char)c >= 'A' && (char)c <= 'Z')))
			assert(ft_isalpha((char)c) == 0);
}

void	test_ft_isalpha()
{
	test_lowercase_letters();
	test_uppercase_letters();
	test_all_non_alpha_characters();
}
