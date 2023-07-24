#include "ft_minunit.h"
#include "../src/libft.h"

static char* test_all_digits()
{
    int c = '0';
    while (c <= '9')
    {
        ft_mu_assert("error: test_all_digits", ft_isdigit(c) != 0);
        c++;
    }
    return (0);
}

static char* test_all_non_digits()
{
    int c = 0;
    while (c < 128)
    {
        if (c < '0' || c > '9')
            ft_mu_assert("error: test_all_non_digits", ft_isdigit(c) == 0);
        c++;
    }
    return (0);
}

char* ft_isdigit_all_tests()
{
    ft_mu_run_test(test_all_digits);
    ft_mu_run_test(test_all_non_digits);
    return (0);
}