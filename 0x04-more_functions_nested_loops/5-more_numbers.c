#include "main.h"
/**
 * more_numbers - print numbers from 0 - 14
 * 10 times
 * _putchar - print numbers
 * Return: 0
 */

void more_numbers(void)
{
	int morenum, times;

	for (times = 0; times < 10; times++)
	{
		for (morenum = 0; morenum <= 14; morenum++)
		{
			if (morenum >= 10)
			{
				_putchar(morenum / 10 + '0');
			}
			_putchar(morenum % 10 + '0');
		}
		_putchar('\n');
	}
}
