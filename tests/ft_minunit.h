#ifndef FT_MINUNIT_H

# define FT_MINUNIT_H
# define ft_mu_assert(message, test) do { if (!(test)) return message; } while (0)
# define ft_mu_run_test(test) do { char *message = test(); tests_run++; \
				if (message) return message; } while(0)
extern int tests_run;

#endif
