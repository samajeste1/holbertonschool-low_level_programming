#include "main.h"

/**
 * _sqrt_helper - helper function to find sqrt recursively
 * @n: number
 * @guess: current guess
 * Return: natural sqrt or -1 if none
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns natural sqrt of n or -1 if none
 * @n: number
 * Return: sqrt or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
