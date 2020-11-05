#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){
    int i, temp = 1;
    for(i = num; i > 0; i--) {
        temp *= i;
    }

    return temp;
}

int main(){
    while(1){
        system("cls");
        int num;
        printf("--------FATORIAL NAO RECURSIVO--------\n");
        printf("Digite o numero (-1 para sair): ");
        scanf("%d", &num);
        if(num == -1)
            break;

        // Calcula e imprime o fatorial
        printf("\nFatorial de %d = %d\n", num, fatorial(num));

        system("pause");
    }
    return 0;
}
