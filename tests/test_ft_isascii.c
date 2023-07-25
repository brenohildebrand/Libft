#include <assert.h>
#include <stdio.h>
#include <limits.h>
#include "libft.h"

static void test_ascii_characters()
{
	for (int c = 0; c < 128; c++)
		assert(ft_isascii(c) == 1);
}

// static void test_non_ascii_characters()
// {
// 	for (long long int c = -1; c >= INT_MIN; c--)
// 		assert(ft_isascii(c) == 0);
// 	for (long long int c = 128; c <= INT_MAX; c++)
// 		assert(ft_isascii(c) == 0);
// }

void	test_ft_isascii()
{
	test_ascii_characters();
	// test_non_ascii_characters();
}