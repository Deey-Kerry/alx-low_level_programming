#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two integers
 * @a: integer one input
 * @b: integer two input
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: integer one input
 * @b: integer two input
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: integer one input
 * @b: integer two input
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: integer one input
 * @b: integer two input
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder after dividing two integers
 * @a: integer one input
 * @b: integer two input
 * Return: remainder after division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
