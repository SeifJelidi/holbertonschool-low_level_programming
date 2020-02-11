#include "holberton.h"
/**
*Jack_Bauer woork with prototype variables
*Prints every minuts in day 
*Return:minutes
*/
void jack_bauer(void)
{
int x;
int z;
for (x=0;x<24;x++)
{
for (z=0;z<60;z++)
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
_putchar(58);
_putchar(z /10 + '0');
_putchar(z % 10 + '0');
_putchar('\n');
		}
	}	
} 
