#include "ft_minunit.h"
#include "../src/libft.h"

static char* test_lowercase_letters()
{
	int c = 'a';
	while (c <= 'z')
	{
		ft_mu_assert("error: test_lowercase_letters", ft_isalpha(c) != 0);
		c++;
	}
	return (0);
}

static char* test_uppercase_letters()
{
	int c = 'A';
	while (c <= 'Z')
	{
		ft_mu_assert("error: test_uppercase_letters", ft_isalpha(c) != 0);
		c++;
	}
	return (0);
}

static char* test_all_non_alpha_characters()
{
	int c = 0;
	while (c < 128)
	{
		if (!(((char)c >= 'a' && (char)c <= 'z') || ((char)c >= 'A' && (char)c <= 'Z')))
			ft_mu_assert("error: test_all_non_alpha_characters", ft_isalpha((char)c) == 0);
		c++;
	}
	return (0);
}

char* ft_isalpha_all_tests()
{
	ft_mu_run_test(test_lowercase_letters);
	ft_mu_run_test(test_uppercase_letters);
	ft_mu_run_test(test_all_non_alpha_characters);
	return (0);
}
