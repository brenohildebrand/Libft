#include <stdio.h>
#include "ft_minunit.h"
#include "main.test.h"

#define run(prefix, tests) do { \
	char *result = tests();\
	if (result != 0)\
	{\
		printf(prefix);\
		printf("%s\n", result);\
	}\
	else\
	{\
		printf(prefix);\
		printf("All tests passed.\n");\
	}\
} while(0)

int tests_run = 0;

int	main(void)
{
	run("isalpha: ", ft_isalpha_all_tests);
	run("isdigit: ", ft_isdigit_all_tests);
	run("isalnum: ", ft_isalnum_all_tests);
	run("isascii: ", ft_isascii_all_tests);
	printf("%d tests in total.\n", tests_run);
	return (0);
}
