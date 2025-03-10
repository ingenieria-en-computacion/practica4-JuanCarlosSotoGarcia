#include <stdio.h>
#include <stdlib.h>

int main() {
    int size ; 
    int *arr ;
    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int count = 0;
    int num;
    printf("Ingrese números (ingrese -1 para terminar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) ;

        if (count >= size) {
            size *= 2;
            arr ;
            if (arr == NULL) {
                printf("Error: No se pudo reasignar memoria.\n");
                return 1;
            }
        }

        arr[count++] = num;
    }

    printf("La lista ingresada es: ");
    for (int i = 0; i < count; i++) {
       
    }
    printf("\n");

   
    return 0;
}
