#include <assert.h>
#include "libft.h"
#include <limits.h>

static void	test_filling_array_with_zeros()
{
	unsigned int array[10];
	ft_memset(array, 0, 10 * sizeof(unsigned int));
	for(int i = 0; i < 10; i++)
		assert(array[i] == 0);
}

static void test_filling_array_with_ones()
{
	unsigned int array[10];
	ft_memset(array, UCHAR_MAX, 10 * sizeof(unsigned int));
	for(int i = 0; i < 10; i++)
		assert(array[i] == UINT_MAX);
}

void	test_ft_memset()
{
	test_filling_array_with_zeros();
	test_filling_array_with_ones();
}