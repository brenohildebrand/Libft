#include <assert.h>
#include "libft.h"

static void test_all_alpha_characters()
{
	for(int c = 'a'; c <= 'z'; c++)
		assert(ft_isalnum(c) != 0);
	for(int c = 'A'; c <= 'Z'; c++)
		assert(ft_isalnum(c) != 0);
}

static void test_all_numeric_characters()
{
	for(int c = '0'; c <= '9'; c++)
		assert(ft_isalnum(c) != 0);
}

static void test_all_other_characters()
{
	for(int c = 0; c < 128; c++)
		if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z') && !(c >= '0' && c <= '9'))
			assert(ft_isalnum(c) == 0);
}

void test_ft_isalnum()
{
	test_all_alpha_characters();
	test_all_numeric_characters();
	test_all_other_characters();
}