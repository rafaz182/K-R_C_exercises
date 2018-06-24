/*
 ============================================================================
 Name        : ex06.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned obtembits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
    unsigned int n = ~0;

    printf("%d\n", obtembits(n, 4, 3));
    printf("%d\n", setbits(163, 4, 3, 204));
    printf("%d\n", setbits(147, 7, 5, 216));

    //printf("%d", n);
}

unsigned obtembits(unsigned x, int p, int n)
{
    // x = 255 p = 4 n = 3
    // 1111 1111 >> (4 + 1 - 3) = 0011 1111
    // ~0 << 3 = 1111 1000
    // ~(1111 1000) = 0000 0111
    // (0011 1111) & (0000 0111) = 0000 0111
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    // x = 1010 0011 = 163 ; y = 1100 1100 = 204 ; p = 4; n = 3;
    // we need to put in x, at p position, the rightmost n-bits of y
    // so, at least, x will be like this = 1011 0011

    //(p+1-n) o tamanho da minha mascara 'n' - a posiçao escolhida 'p' = distancia que devo percorrer; +1 pois o indice de posiçao começa do 0

    // (x & ~(~(~0 << n) << (p+1-n))) | (( y & ~(~0<<n)) << (p+1-n)); // from internet
    //
    // (x & ~(~(~0 << n) << (p+1-n)))
    // ~0 << 3 = 1111 1000  (Ok)
    // ~(1111 1000) = 0000 0111
    // 0000 0111 << 2 = 0001 1100  (Ok)
    // ~(0001 1100) = 1110 0011    // switch off the spected bits
    // 1010 0011 & 1110 0011 = 1010 0011  (Ok)
    //
    //(( y & ~(~0<<n)) << (p+1-n))
    // ~0 << 3 = 1111 1000  (Ok)
    // ~1111 1000 = 0000 0111  (Ok)
    // 1100 1100 & 0000 0111 = 0000 0100  (Ok)
    // 0000 0100 << 2 = 0001 0000
    //
    // 1010 0011 | 0001 0000 = 1011 0000 (Ok)

    unsigned msk = ~(~0 << n);
    // msk = 1111 1111 << 3 = 1111 1000
    // msk = ~(1111 1000) = 0000 0111
    //return x | ((y & msk) << (p+1-n));
    // 1100 1100 & 0000 0111 = 0000 0100
    // 0000 0100 << 2 = 0001 0000
    // 1010 0011 | 0001 0000 = 1011 0011

    return (x & ~(msk << (p+1-n))) | (( y & msk) << (p+1-n));
}
