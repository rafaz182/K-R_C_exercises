/*
 ============================================================================
 Name        : ex14.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : Program that prints the frequency of each character in Histogram
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, letter, other, nl, digit, nc;

    c = letter = other = nl = digit = nc = 0;

   while((c=getchar()) != EOF){
        ++nc;  // total character
        if(c=='\n')
            ++nl; // total newline
        else if(c >= '0' && c <= '9')
            ++digit; // total new digit
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            ++letter;
        else { ++other; }
   }

    letter /= nc;
    digit /= nc;
    other /= nc ;
    nl /= nc;

    printf("Total Character: %.0f\n Letter: %.2f%% \n Digit: %.2f%% \n Newline: %.2f%% \n Other: %.2f%%",
           nc , letter*100, digit*100, nl*100, other*100 );
    int i;
    printf("\nLETTER:");
    for(i = 0;  i < letter*100; ++i)
        printf("x");

    printf("\nDIGIT: ");
    for(i = 0;  i < digit*100; ++i)
        printf("x");

    printf("\nNEWLINE: ");
    for(i = 0;  i < nl*100; ++i)
        printf("x");

    printf("\nOTHER: ");
    for(i = 0;  i < other*100; ++i)
        printf("x");
}
