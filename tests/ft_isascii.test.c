#include "ft_minunit.h"
#include "../src/libft.h"
#include "stdio.h"
#include "limits.h"

static char* test_ascii_characters()
{
	for (int c = 0; c < 128; c++)
		ft_mu_assert("error: test_ascii_characters", ft_isascii(c) == 1);
	return (0);
}

// static char* test_non_ascii_characters()
// {
// 	for (long long int c = -1; c >= INT_MIN; c--)
// 	{
// 		ft_mu_assert("error: test_ascii_characters", ft_isascii(c) == 0);
// 	}
// 	for (long long int c = 128; c <= INT_MAX; c++)
// 	{
// 		ft_mu_assert("error: test_ascii_characters", ft_isascii(c) == 0);
// 	}
// 	return (0);
// }

char* ft_isascii_all_tests()
{
	ft_mu_run_test(test_ascii_characters);
	// ft_mu_run_test(test_non_ascii_characters);
	return (0);
}