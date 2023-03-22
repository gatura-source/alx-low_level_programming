#include "main.h"
/**
 * jack_bauer - FBI agent having a long day
 * Description: as above
 * Return: 0
 */
void jack_bauer(void)
{
	int min_a;
	int min_b;
	int hour_a;
	int hour_b;

	for (hour_a = 48; hour_a <= 50; hour_a++)
	{
		for (hour_b= 48; hour_b <= 51; hour_b++)
		{
			for ( min_a = 48; min_a <= 53; min_a++)
			{
				for (min_b = 48; min_b <= 57; min_b++)
				{
					_putchar(hour_a);
					_putchar(hour_b);
					_putchar(58);
					_putchar(min_a);
					_putchar(min_b);
					_putchar('\n');
				}
			}
		}
	}

}

