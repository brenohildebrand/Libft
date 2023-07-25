#include <stdio.h>
#include "ft_minunit.h"
#include "main.test.h"

#define run(prefix, tests) do { \
	char *result;

	result = tests();
	if (result != 0)
	{
		printf(prefix);
		printf(": ");
		printf("%s\n", result);
	}
	else
	{
		printf(prefix);
		printf(": ");
		printf("All tests passed.\n");
	}
} while(0)

int tests_run = 0;

int	main(void)
{
	run(ft_isalpha_all_tests);
	run(ft_isdigit_all_tests);
	printf("%d tests in total.\n", tests_run);
	return (0);
}
