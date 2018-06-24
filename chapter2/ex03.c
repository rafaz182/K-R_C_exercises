/*
 ============================================================================
 Name        : ex03.c
 Author      : rafaz182
 Version     :
 Copyright   : Your copyright notice
 Description : Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int htoi(char s[]);

int main()
{
    char stri[100] = {"0xAC1261F"}/*{"0x12FC56A"}*/;

    printf("%d", htoi(stri));
}

int htoi(char stringHex[])
{
    int i, c;
    int start;

    int total;

    char first = stringHex[0];
    char second = stringHex[1];

    if(first == '0' && (second == 'x' || second == 'X')){
        start = 2;

        for(i = start; (c = stringHex[i]) != '\0'; ++i){
            int v = 0;
            if(c >= '0' && c <= '9'){
                v = c - '0';
                //printf("%d\n", v);
            }else if(c >= 'a' && c <= 'f'){
                v = 10 + (c - 'a');
                //printf("%d\n", v);
            }else if(c >= 'A' && c <= 'F'){
                v = 10 + (c - 'A');
               // printf("%d\n", v);
            }else{
                printf("Valor invalido para HEX");
            }
            total = total *16 + v;

            printf("%d-%c\n", total, stringHex[i]);
        }

        return total;
    }else{printf("Valor hexadecimal incorreto");}


}
