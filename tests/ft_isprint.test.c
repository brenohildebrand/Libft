#include "ft_minunit.h"
#include "../src/libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

static char* test_printable_characters()
{
	for(int c = 0x20; c < 0x7f; c++)
		ft_mu_assert("error: test_printable_characters", ft_isprint(c) == 1);
	return (0);
}

static char* test_non_printable_characters()
{
	for(int c = 0; c < 0x20; c++)
		ft_mu_assert("error: test_non_printable_characters", ft_isprint(c) == 0);
	ft_mu_assert("error: test_non_printable_characters", ft_isprint(0x7f) == 0);
	return (0);
}

char* ft_isprint_all_tests()
{
	ft_mu_run_test(test_printable_characters);
	ft_mu_run_test(test_non_printable_characters);
	return (0);
}