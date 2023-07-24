#include <stdio.h>
#include "ft_minunit.h"
#include "main.test.h"

int tests_run = 0;

int	main(void)
{
	char *result;

	result = ft_isalpha_all_tests();
	printf("ft_isalpha: ");
	if (result != 0)
		printf("%s\n", result);
	else
		printf("All tests passed.\n");
	
	result = ft_isdigit_all_tests();
	printf("ft_isdigit: ");
	if (result != 0)
		printf("%s\n", result);
	else
		printf("All tests passed.\n");

	printf("%d tests in total.\n", tests_run);

	return result != 0;
}
