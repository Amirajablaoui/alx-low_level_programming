#include <stdio.h>

int main() {
    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of short: %lu byte(s)\n", sizeof(short));
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of long: %lu byte(s)\n", sizeof(long));
    printf("Size of long long: %lu byte(s)\n", sizeof(long long));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    printf("Size of long double: %lu byte(s)\n", sizeof(long double));

    return 0;
}
This program uses the printf function to print the sizes of various types. The sizeof operator is used to determine the size of each type in bytes. The output is formatted using format specifiers %lu for unsigned long integers and %s for the type name. Finally, it returns the value 0 to indicate successful execution.

To compile the program, you can use gcc:

Copy code
gcc program.c -o program
You can then run the program to see the output.





User
in one instuction
ChatGPT
!

2 / 2

Something went wrong. If this issue persists please contact us through our help center at help.openai.com.





