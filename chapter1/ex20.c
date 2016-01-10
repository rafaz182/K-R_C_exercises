/*
 ============================================================================
 Name        : ex20.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : Change tab characters of input by the appropriate number of spaces to reach the next tab stop.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define COLUM 8

int coluna = 0;

int main()
{
    int c;
    int i = 0;
    int d;




    /*O while obtem um caractere
      atribuindo-o a c, e depois
      depois testa se o caractere
      foi o sinal de fim-do-arquivo
      se não foi, o corpo do while
      é executado
    */
    while((c=getchar()) != EOF){
        if(c == '\t'){
            d = (COLUM-coluna);
            while(i < d){ // tab = quanto falta para completar a coluna
                putchar('_');
                i++;
                coluna++;
            }
            //if(coluna >= COLUM) //desnecessario, cada caracter é o while prinicipal executado por vez
            coluna = 0;
            i = 0;
        }else{
            putchar(c);
            coluna++;
            if(c == '\n' || coluna >= COLUM)
                coluna = 0;
        }
    }
}
