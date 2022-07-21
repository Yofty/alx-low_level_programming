#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n : n is the number to be updated
 * Return: int (1 or 0)
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
/**
 * prime - sellectes prime numbers from the list
 * @n : n is the number to be updated
 * @x : x is the integer to divide n
 * Return: int
 */
int prime(int n, int x)
{
	if (x > 0 && x < n && n / x == 0)
	{
		return (0);
	}
	else if (x < 0 && x > n && n / x == 0)
	{
		return(0);
	}
	else if (n == 1 || n == -1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
