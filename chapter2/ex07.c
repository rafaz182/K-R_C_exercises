/*
 ============================================================================
 Name        : ex07.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned invert(unsigned x, int p, int n);

int main()
{
    unsigned char x = 163;
    printf("%d", invert(x, 4, 3));
    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    // x = 1010 0011 = 163 ; ~x = 0101 1100 = 204 ; p = 4; n = 3;
    // so, at least, x will be like = 1011 1111 =  191

    unsigned xInvertido, msk;

    msk = ~(~0 << n);
    xInvertido = ~x;

    return (x & ~(msk << (p + 1 - n))) | (xInvertido & (msk << (p + 1 - n)));
}
