#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void	test_ft_isalpha();
void	test_ft_isdigit();
void	test_ft_isalnum();
void	test_ft_isascii();
void	test_ft_isprint();
void	test_ft_strlen();
void	test_ft_memset();
void	test_ft_bzero();
void	test_ft_memcpy();
void	test_ft_strlcpy();
void	test_ft_strlcat();
void	test_ft_toupper();
void	test_ft_tolower();
// add prototype

int main()
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	// add assert
	printf("\x1b[38;2;0;255;0mAll tests passed.\x1b[0m\n");
	return (0);
}