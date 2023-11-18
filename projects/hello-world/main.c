/*
 * hello - main.c
 *
 * Print "Hello, world!" to the debug output.
 */

#include <stdio.h>

extern void initialise_monitor_handles(void);

int main(void)
{
    initialise_monitor_handles();

    printf("Hello, world!\n");

    while(1);
    return 0;
}