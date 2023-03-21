#ifndef MAIN_H_
#define MAIN_H_

void put_char();
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif
