#include <assert.h>
#include "libft.h"

static void	test_like_crazy()
{
	assert(ft_atoi("   \t\t \n -827sk8932js") == -827);
}

void	test_ft_atoi()
{
	test_like_crazy();
}