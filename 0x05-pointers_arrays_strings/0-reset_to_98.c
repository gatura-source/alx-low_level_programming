#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reset_to_98 - resets value of a int using mem address to 98
 * @n: func input
 * Description: AS said above
 * Return: 0 on success
 */

void reset_to_98(int *n)
{
	int def = 98; /*declaring our default value */
	int *ptr; /* declaring pointer that will hold mem addr of def*/

	ptr = &def; /*storing addr of def to *ptr*/
	*n = *ptr; /*Swapping memory address */


}

