#include <unistd.h>
#include "main.h"
#include <stdio.h>
/*
*_putchar writes the character c to the output
*@c:The character to print 
*Return:On success 1.
*On error, -1 is returned,and the errno is set approprietly
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
