/*
 ============================================================================
 Name        : ex16.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAXL 1000

int getline(char s[]);
void copy(char to[], char from[]);

int main()
{
    int len; // tamanho da linah atual
    int max; // tamanho da maior linha recebida
    char line[MAXL]; // linha atual da entrada
    char mline[MAXL]; // mairo entrada até agora

    max = 0;

    while((len = getline(line)) > 0){ // enquanto tamanho da entrada maior que 0
        if(len > max){
            max = len;
            copy(mline, line);
        }

        if(len > 80)
            printf("\n%s\n", line);
    }

    if(max > 0){
        printf("\nMaior String: %d\n", max);
        printf("%s", mline);
    }

    return 0;
}

int getline(char s[])
{
    int c, i, j;
    j = 0; //conta os caracteres

    for(i = 0; i < MAXL-1 && (c=getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
        j++;
        if(c == ' ' || c == '\t')
            j--;
    }

    if(c == '\n'){
        s[i] = '\n';
        i++;
    }

    s[i] = '\0';

    return j;
}

void copy(char to[], char from[])
{
    int i = 0; // contador

    while((to[i] = from[i]) != '\0')
        ++i;
}
