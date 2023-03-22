#include "main.h"
/**
 * jack_bauer - FBI agent having a long day
 * Description: as above
 * Return: 0
 */
void jack_bauer(void)
{
	int min_a;
	int hour_a;
	int hour_b;
	int min_b;

	for (hour_a = 48; hour_a < 51; hour_a++)
	{
			for (hour_b = 48; hour_b < 52; hour_b++)
			{

				for (min_a = 48; min_a < 58; min_a++)
				{
					if ( hour_b <=1)
					{
						_putchar(hour_a);
						_putchar(hour_b);
					}
				}
			}	
	}

}

