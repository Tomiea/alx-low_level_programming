#include <unistd.h> 

/**
 * _putchar - writes the character c to stdout
 *The character to be printed
 *
 * Return: On success 1.
 * on error, -1 ia returned, and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c. 1));
}