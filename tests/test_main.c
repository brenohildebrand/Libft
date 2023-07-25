#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void	test_ft_isalpha();
void	test_ft_isdigit();
void	test_ft_isalnum();
void	test_ft_isascii();
void	test_ft_isprint();
void	test_ft_strlen();
// add prototype

int main()
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	// add assert
	printf("\x1b[38;2;0;255;0mAll tests passed.\x1b[0m\n");
	return (0);
}