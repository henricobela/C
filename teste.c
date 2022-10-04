#include<stdio.h>
#include<conio.h>

int main(){
    int a, b, contador;
    a = 10;

    printf("Hello World!!!\n");
    scanf("%d", &b);
    printf("%d", b);

    printf("Contando até 100\n");
    for(contador = 0; contador <= 100; contador++){
        printf("Contando até %d\n", contador);
    }

    return 0;
}