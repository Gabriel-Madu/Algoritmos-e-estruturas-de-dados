/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
exiba o maior endereco.*/
#include <stdio.h>

int main(){

    int *x, *y;

    printf("Endereco de x: %p", &x);
    printf("\nEndereco de y: %p", &y);

    if(&x > &y)
        printf("\nMaior endereco: %p", &x);
    else
        printf("\nMaior endereco: %p", &y);
}