#include "main.h"

/**
  * _abs - computes absolute values of integer
  *
  * @i: input number as an integer.
  *
  *Return: absolute value
  */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
