/*
 ============================================================================
 Name        : ex15.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

double celToFah(); // 0ºC = 32ºF

int main()
{
    double te =0;
    double convertido =0;

    //printf("%f\n", te);
    scanf("%lf", &te);
    //printf("\n\n%f\n\n\n", te);
    //printf("\n%d %f\n\n\n", &temperatura, temperatura);

    convertido = celToFah(te);
    printf("%lf", convertido);

}

double celToFah(double temperatura){

    double fah =0;

    fah = (temperatura * (9.0/5.0)) + 32;

    return fah;
}
