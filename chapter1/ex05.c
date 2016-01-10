/*
 ============================================================================
 Name        : ex05.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : Convert Celsius to Fahrenheit
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fahrenheit(int);

int main()
{
    int cels, conver;

    while(cels != 0){
        printf("Digite Celsius: ");
        scanf("%d", &cels);
        conver = fahrenheit(cels);

        printf("Fahrenheit = %d\n", conver);
    }
}

int fahrenheit (int cels)
{
    int fahr;
    fahr = ((cels * 9) / 5) + 32;
    return fahr;
}
