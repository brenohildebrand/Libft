#include <assert.h>
#include "libft.h"

static void test_all_digits()
{
    for(int c = '0'; c <= '9'; c++)
        assert(ft_isdigit(c) != 0);
}

static void test_all_non_digits()
{
    for(int c = 0; c < 128; c++)
        if (c < '0' || c > '9')
            assert(ft_isdigit(c) == 0);
}

void test_ft_isdigit()
{
    test_all_digits();
    test_all_non_digits();
}