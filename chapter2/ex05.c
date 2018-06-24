/*
 ============================================================================
 Name        : ex05.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define ON 1
#define OFF 0

int ocorre(char s1[], char s2[]);

int main()
{
    char s1[] = {"aygUAGUSGAugauGAUY"};
    char s2[] = {"PXLPAlxpLXPLxplA"};

    if(ocorre(s1, s2) == -1)
        printf("None character equal.\n");
}

// i++ primeiro usa, depois incrementa
// ++i primeiro incrementa, depois usa

int ocorre(char s1[], char s2[])
{
    int i, j;
    int notHave = ON;

    for(i = 0; s2[i] != '\0'; i++){
        for(j = 0; s1[j] != '\0'; j++){
            if(s1[j] == s2[i]){
                notHave = OFF;
                printf("s1[%d] == s2[%d]\n", j+1, i+1);
                break;
            }
        }
    }

    if(notHave)
        return -1;
}
