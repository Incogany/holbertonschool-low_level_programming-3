#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: number to check
 *
 * Return: the last digit
 */
int print_last_digit(int num)
{
	int last_digit, l;

	if (num < 0)
	{
		num = -1 * num;
	}
	last_digit = num % 10;
	l = last_digit + '0';
	_putchar(p);
	return (last_digit);
}