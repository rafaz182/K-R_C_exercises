/*
 ============================================================================
 Name        : ex21.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : Replace white string the minimum number of tab characters and background, so as to obtain the same spacing.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define COLUM 8

int carac = 0;

int main()
{
    int c;
    int e, f;
    int i = 0;
    int k = 0;
    int temp =0 ;
    int cb = 0;

    while((c=getchar()) != EOF){
        if(c == ' '){
            ++cb;
            while((c=getchar()) == ' '){ // sai do laço com c = caracter apos ultimo espaço
                cb++;
            }
            if((cb+carac) == COLUM){ // o \t ja alinha para o programa continuar escrevendo
                putchar('\t');
                cb = 0;
                carac = 0; // completou a coluna
                putchar(c);
                carac++;
            }else if((cb+carac) < COLUM){  // não fecha a coluna, somente replica os espaços em branco
                while(temp < cb){
                    putchar('_');
                    temp++;
                    carac++; // espaço em branco tmb é caractere
                }
                putchar(c);
                carac++;
                if(carac == COLUM)
                    carac = 0;
                cb = 0;
                temp = 0;
            }else if((cb+carac) > COLUM){ // se a soma de caracteres anteriores + os em brancos forem maior que a coluna
                if((COLUM-carac) > 0){ // se a qntd q falta para completar a coluna for maior que 0
                    while(carac != COLUM){
                        putchar('_');
                        carac++;
                        cb--;
                    }
                    carac = 0; // o laço acima completa a coluna
                }
                temp = (cb/COLUM); // obtem a quantidade de \t
                e = (temp*COLUM);
                f = (cb - e); // obtem o resto da divisão em temp
                while(i < temp){
                    putchar('\t'); // coluna ja completa, nao necessita acrestentar ao carac
                    i++;
                }
                while(k < f){
                    putchar('_');
                    k++;
                    carac++;
                }
                putchar(c);
                carac++;
                cb = 0;
                temp = 0;
                e = 0;
                f = 0;
                i = 0;
                k = 0;
            }
        }else{
            putchar(c);
            carac++;
            if(c == '\n' || carac == COLUM){
                carac = 0;
            }
        }
    }
}
