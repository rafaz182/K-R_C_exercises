/*
 ============================================================================
 Name        : ex04.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

void comprime(char s[], char s2[]);

int main()
{
    char s[] = {"Rafael esta programando"};
    char s2[] = {"Rafael ja programou"};

    comprime(s, s2);

    printf("%s", s);
}

void comprime(char s[], char s2[])
{
    int i, j;

    for(i = j = 0; s[i] != '\0'; i++)
        if(s[i] != s2[i])
            s[j++] = s[i];
    s[j] = '\0';
}
