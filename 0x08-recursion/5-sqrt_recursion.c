#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 *
 * @n: integer input
 * Return: squareroot
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (squareroot(1, n));
}

/**
 * squareroot -runs guesses and checks for possible square roots
 * @x: guess
 * @y: number whose square root is to be found
 * Return: returns square root if number has a natural
 * square root otherwise returns -1
 */

int squareroot(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	return (squareroot(x + 1, y));
}
