#include <stdio.h>
/*
 * *
 * */

int main(void)
{
    int limit = 4000000;
    int sum = 0;
    int a = 1;
    int b = 2;
    int fib = 0;

    while (fib <= limit)
    {
        if (fib % 2 == 0)
        {
            sum += fib;
        }

        fib = a + b;
        a = b;
        b = fib;
    }

    printf("The sum of even-valued terms in the Fibonacci sequence below %d is: %d\n", limit, sum);

    return 0;
}

