/*
 ============================================================================
 Name        : ex13.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : write a program to print a histogram of the size of the input words
 ============================================================================
 */
#include <stdio.h>

int main()
{
    int c, i, i2, i3, nwhite, nother;
    int ndigit[10]; //array que vai de 0 a 9

    nwhite = nother = 0; //iguala as variaveis a 0
    for (i = 0; i < 10; ++i){ //laço que faz de 'i' um contador
        ndigit[i] = 0; //array com contador que vai de 0 a 9, igualando todos a 0
    }

    while ((c = getchar()) != EOF){ //laço que só acaba quando a entrada for o sinal de fim do arquivo(CTRL+Z)
        if (c >= '0' && c <= '9') //verifica se 'c' é um caractere entre 0 e 9
            ++ndigit[c-'0']; /*apos a verificação, [c-'0'] é uma tecnica para dar um valor inteiro, para um numero em char, exemplo 1 to '1', no caso do exercicio seria de char para int, '1' to 1*/
        else if (c == ' ' || c == '\n' || c == '\t') //verifica se é um qualquer tipo de espaço em brando
            ++nwhite;
        else
            ++nother;
    }

    for (i2 = 0; i2 < 10; ++i2){ //laço que faz um novo contator para o array
        printf("00%d = ", i2); //escreve o numero do Histograma
        for (i3 = 0; i3 < ndigit[i2]; ++i3){ //laço que se repete de acordo com a quantidade de caracteres armazenados em cada array
            if (ndigit[i2] >= 1){ //verifica no array da vez possui algum valor
            printf("X"); //imprime X, que significa que 1 valor foi encontrado
            }
        }
        printf("\n");
    }

    printf("NWHITE = ");
    for(i = 0;i < nwhite; ++i){
        printf("X");
    }
    printf("\n");

    printf("NOTHER = ");
    for(i = 0; i < nother; ++i){
        printf("X");
    }
    printf("\n");

}
