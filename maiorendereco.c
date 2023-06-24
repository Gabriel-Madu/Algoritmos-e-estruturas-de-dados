#include <stdio.h>

int main(){

    int *x, *y;

    printf("Digite o valor de x: ");
    scanf("%p", &x);
    printf("\nDigite o valor de y: ");
    scanf("%p", &y);

    printf("Endereco de x: %p", &x);
    printf("\nEndereco de y: %p", &y);

    if(&x > &y)
        printf("\nConteudo = %p", x);
    else
        printf("\nConteudo = %p", y);
}
