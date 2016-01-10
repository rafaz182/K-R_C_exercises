/*
 ============================================================================
 Name        : ex08.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

main()
{
    int c, nl, t, b;
    nl = 0;
    t = 0;
    b = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n'){
        ++nl;
        }

        if (c == '\t'){
        ++t;
        }

        if (c == ' '){
        ++b;
        }
    }
    printf("%d, %d, %d", nl, t, b);

    return 0;
}
