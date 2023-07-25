#include "ft_minunit.h"
#include "../src/libft.h"

static char* test_all_alpha_characters()
{
	int c = 'a';
	while (c <= 'z')
	{
		ft_mu_assert("error: test_all_alpha_characters", ft_isalnum(c) != 0);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		ft_mu_assert("error: test_all_alpha_characters", ft_isalnum(c) != 0);
		c++;
	}
	return (0);
}

static char* test_all_numeric_characters()
{
	int c = '0';
	while (c <= '9')
	{
		ft_mu_assert("error: test_all_numeric_characters", ft_isalnum(c) != 0);
		c++;
	}
	return (0);
}

static char* test_all_other_characters()
{
	int c = 0;
	while (c < 128)
	{
		if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z') && !(c >= '0' && c <= '9'))
			ft_mu_assert("error: test_all_other_characters", ft_isalnum(c) == 0);
		c++;
	}
	return (0);
}

char* ft_isalnum_all_tests()
{
	ft_mu_run_test(test_all_alpha_characters);
	ft_mu_run_test(test_all_numeric_characters);
	ft_mu_run_test(test_all_other_characters);
	return (0);
}