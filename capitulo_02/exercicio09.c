/*
    9) Faça um programa que leia dois valores do tipo float. Use um único comando de
    leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
    foram lidos. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float x = 0, y = 0;

    printf("Digite dois valores float: ");
    scanf("%f %f", &x, &y);

    printf("Ordem inversa: %0.2f %0.2f", y, x);
}