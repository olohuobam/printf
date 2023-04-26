#include "main.h"

/**
 * char_put - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 */
int char_put(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
