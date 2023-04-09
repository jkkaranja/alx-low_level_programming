#include "main.h"
/**
  * print_triangle - prints a triangle followed by a new line
  * @size: size of a triangle
  * Return: always 0
  */
void print_triangle(int size)
{
	int m, n, o;

	if  (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (m = 0; m < size; m++)
	{
	for (n = size - n; n > 1; n--)
	{
	_putchar(32);
	}
	for (o = 0; o <= m; o++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
