#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Entry Point
 * Return : Always 0 (Success)
 */


int main(void)

{ int i;
	putchar('0');

    for (i = '0'; i <= '9'; i++)
    {
	    
        putchar(',');
        putchar(' ');
        putchar('0' + i);
    }

    putchar('\n');

    return (0);
}
