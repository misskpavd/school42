#include "ft_printf.h"
#include <stdio.h>  // For printf (used to compare outputs)

int main(void) {
    char c = 'A';
    char *s = "Hello, World!";
    int d = -42;
    unsigned int u = 42;
    unsigned int x = 0x2a;  // Equivalent to 42 in decimal
    void *p = s;  // Using the string pointer as an example for %p

    // Testing %%
    ft_printf("This is a percent symbol: %%\n");

    // Testing %c
    ft_printf("This is a char: %c\n", c);

    // Testing %s
    ft_printf("This is a string: %s\n", s);

    // Testing %d and %i
    ft_printf("This is an integer (d): %d\n", d);
    ft_printf("This is an integer (i): %i\n", d);

    // Testing %u
    ft_printf("This is an unsigned integer: %u\n", u);

    // Testing %x and %X
    ft_printf("This is a hexadecimal (lowercase): %x\n", x);
    ft_printf("This is a hexadecimal (uppercase): %X\n", x);

    // Testing %p
    ft_printf("This is a pointer address: %p\n", p);

    return 0;
}
