#include <stdio.h>

int main(void)
{
	char b[9] = "Bedan";
	int i;

	for (i = 0; i < 9 && b[i] != '\0'; i++)
	{
		printf("0x%02x\n", b[i]);
	}
	printf("0x%02x\n", b[0]);

	return (0);
}
