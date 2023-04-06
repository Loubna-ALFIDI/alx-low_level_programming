#include "main.h"
/**
 * check_if_divisible - check the code
 * @n: parametre
 * @i: parametre
 * Return: int
 */
int check_if_divisible(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_if_divisible(n, i + 2));
}
/**
 * is_prime_number - check the code
 * @n: parametre
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	return (check_if_divisible(n, 3));
}
