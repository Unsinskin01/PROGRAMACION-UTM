#include <stdio.h>

int main() {
    int numero, i;
    double raiz, ad, ant, formu;

   
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

   
    for (i = 0; i <= numero; i++) {
        ad = i; 
        ant = 0;   

        while (formu=(ad - ant) > 0) {
            ant = ad;
            ad = 0.5 * (ad + i / ad);
        }

        raiz = ad;
        printf("La raíz cuadrada de %d es aproximadamente %.4lf\n", i, raiz);
    }

    return 0;
}

